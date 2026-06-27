#!/usr/bin/env python3
"""
VMAC Performance Analyzer - Fixed for testbench output format
Parses the output from main_cached.cpp testbench
"""

import sys
import re
import json
import argparse
import matplotlib.pyplot as plt

def parse_log(log_file):
    """Parse the simulation log file for performance metrics"""
    results = {
        "cpu_basic": 0,
        "cpu_unrolled": 0,
        "vector": 0,
        "verification": "UNKNOWN"
    }
    
    # Updated patterns to match the testbench output format
    patterns = {
        "verification": re.compile(r"Verification:\s+(PASS|FAIL)"),
        "cpu_basic": re.compile(r"CPU \(Basic\):\s+(\d+)\s+cycles"),
        "cpu_unrolled": re.compile(r"CPU \(Unrolled\):\s+(\d+)\s+cycles"),
        "vector": re.compile(r"Vector Coprocessor:\s+(\d+)\s+cycles"),
        "canary": re.compile(r"Memory Check \(Canary\):\s+0x([0-9a-fA-F]+)"),
        "success": re.compile(r"SUCCESS:\s+Program completed!")
    }

    try:
        with open(log_file, 'r') as f:
            content = f.read()
            
            # Check for successful completion
            if not patterns["success"].search(content):
                print("Warning: Program did not complete successfully")
            
            # Search for verification status
            match = patterns["verification"].search(content)
            if match:
                results["verification"] = match.group(1)
                print(f"Verification: {results['verification']}")
            
            # Search for cycle counts
            for key in ["cpu_basic", "cpu_unrolled", "vector"]:
                match = patterns[key].search(content)
                if match:
                    results[key] = int(match.group(1))
                    print(f"Found {key}: {results[key]} cycles")
                else:
                    print(f"Warning: Could not find result for {key}")
            
            # Check canary value
            match = patterns["canary"].search(content)
            if match:
                canary = match.group(1).upper()
                if canary == "DEADBEEF":
                    print("Canary check: PASS (0xDEADBEEF)")
                else:
                    print(f"Warning: Unexpected canary value: 0x{canary}")

    except FileNotFoundError:
        print(f"Error: Log file {log_file} not found")
        sys.exit(1)
    except Exception as e:
        print(f"Error parsing log file: {e}")
        sys.exit(1)

    return results

def generate_report(results, vector_len, iterations, output_file):
    """Generate performance analysis report"""
    
    # Calculate statistics
    ops_per_iter = vector_len  # One MAC per element
    total_ops = ops_per_iter * iterations * 2  # MAC = multiply + add
    
    # Avoid division by zero
    cpu_cyc = max(results["cpu_basic"], 1)
    unroll_cyc = max(results["cpu_unrolled"], 1)
    vec_cyc = max(results["vector"], 1)

    # Calculate speedups
    speedup_basic = cpu_cyc / vec_cyc if vec_cyc > 0 else 0
    speedup_unrolled = unroll_cyc / vec_cyc if vec_cyc > 0 else 0
    unroll_vs_basic = cpu_cyc / unroll_cyc if unroll_cyc > 0 else 0
    
    # Calculate efficiency metrics
    cycles_per_elem_cpu = cpu_cyc / (vector_len * iterations) if (vector_len * iterations) > 0 else 0
    cycles_per_elem_unroll = unroll_cyc / (vector_len * iterations) if (vector_len * iterations) > 0 else 0
    cycles_per_elem_vec = vec_cyc / (vector_len * iterations) if (vector_len * iterations) > 0 else 0
    
    report = f"""
============================================================
VMAC Performance Analysis Report
============================================================

Configuration:
  Vector Length:     {vector_len} elements
  VLEN:             256 bits
  Element Width:    32 bits
  Iterations:       {iterations}
  Total MAC Ops:    {vector_len * iterations}
  
Verification Status: {results['verification']}

Raw Cycle Counts:
  CPU (Basic):      {results['cpu_basic']:,} cycles
  CPU (Unrolled):   {results['cpu_unrolled']:,} cycles
  Vector Unit:      {results['vector']:,} cycles

Speedup Analysis:
  Vector vs CPU (Basic):     {speedup_basic:.2f}x
  Vector vs CPU (Unrolled):  {speedup_unrolled:.2f}x
  Unrolled vs Basic:         {unroll_vs_basic:.2f}x

Efficiency (Cycles per Element):
  CPU (Basic):       {cycles_per_elem_cpu:.2f}
  CPU (Unrolled):    {cycles_per_elem_unroll:.2f}
  Vector Unit:       {cycles_per_elem_vec:.2f}

Throughput (Ops per Cycle):
  CPU (Basic):       {total_ops/cpu_cyc if cpu_cyc > 0 else 0:.2f}
  CPU (Unrolled):    {total_ops/unroll_cyc if unroll_cyc > 0 else 0:.2f}
  Vector Unit:       {total_ops/vec_cyc if vec_cyc > 0 else 0:.2f}

Performance Summary:
  The vector coprocessor achieved a {speedup_basic:.1f}x speedup
  over the basic CPU implementation and {speedup_unrolled:.1f}x 
  over the optimized CPU version.
============================================================
"""
    
    print(report)
    
    # Save report to file
    with open(output_file, "w") as f:
        f.write(report)
    print(f"Report saved to {output_file}")
    
    return report

def plot_results(results, output_png):
    """Create performance visualization plots"""
    
    # Skip plotting if no data
    if all(v == 0 for v in [results['cpu_basic'], results['cpu_unrolled'], results['vector']]):
        print("No data to plot - all cycle counts are zero")
        return
    
    fig, axes = plt.subplots(1, 3, figsize=(15, 5))
    
    # Plot 1: Cycle counts
    labels = ['CPU\n(Basic)', 'CPU\n(Unrolled)', 'Vector\nCoprocessor']
    cycles = [results['cpu_basic'], results['cpu_unrolled'], results['vector']]
    colors = ['#3498db', '#2ecc71', '#e74c3c']
    
    ax = axes[0]
    bars = ax.bar(labels, cycles, color=colors)
    ax.set_title('Execution Cycles (Lower is Better)', fontsize=14, fontweight='bold')
    ax.set_ylabel('Total Cycles')
    ax.grid(axis='y', linestyle='--', alpha=0.3)
    
    # Add value labels on bars
    for bar in bars:
        height = bar.get_height()
        if height > 0:
            ax.text(bar.get_x() + bar.get_width()/2., height,
                   f'{int(height):,}',
                   ha='center', va='bottom')
    
    # Plot 2: Speedup comparison
    ax = axes[1]
    cpu_cyc = max(results['cpu_basic'], 1)
    speedups = [
        1.0,  # CPU basic as baseline
        cpu_cyc / max(results['cpu_unrolled'], 1),
        cpu_cyc / max(results['vector'], 1)
    ]
    
    bars = ax.bar(labels, speedups, color=colors)
    ax.set_title('Speedup vs CPU Basic (Higher is Better)', fontsize=14, fontweight='bold')
    ax.set_ylabel('Speedup Factor')
    ax.axhline(y=1, color='black', linestyle='--', alpha=0.5, label='Baseline')
    ax.grid(axis='y', linestyle='--', alpha=0.3)
    
    for bar, val in zip(bars, speedups):
        if val > 0:
            ax.text(bar.get_x() + bar.get_width()/2., bar.get_height(),
                   f'{val:.2f}x',
                   ha='center', va='bottom')
    
    # Plot 3: Efficiency comparison (pie chart)
    ax = axes[2]
    if results['vector'] > 0:
        efficiency_labels = ['Vector Processing', 'CPU Basic', 'CPU Unrolled']
        # Normalize to show relative efficiency
        total = sum([1/max(c, 1) for c in cycles])
        sizes = [(1/max(c, 1))/total * 100 for c in cycles]
        
        ax.pie(sizes, labels=efficiency_labels, colors=colors[::-1], 
               autopct='%1.1f%%', startangle=90)
        ax.set_title('Relative Efficiency', fontsize=14, fontweight='bold')
    else:
        ax.text(0.5, 0.5, 'No Vector Data', ha='center', va='center', fontsize=16)
        ax.set_xlim(0, 1)
        ax.set_ylim(0, 1)
    
    plt.suptitle('VMAC Performance Comparison', fontsize=16, fontweight='bold')
    plt.tight_layout()
    
    # Save figure
    plt.savefig(output_png, dpi=150, bbox_inches='tight')
    print(f"Performance plots saved to {output_png}")
    plt.close()

def save_json_results(results, vector_len, iterations, output_file):
    """Save results in JSON format"""
    
    # Calculate additional metrics
    cpu_cyc = max(results["cpu_basic"], 1)
    unroll_cyc = max(results["cpu_unrolled"], 1)
    vec_cyc = max(results["vector"], 1)
    
    json_data = {
        "configuration": {
            "vector_length": vector_len,
            "vlen_bits": 256,
            "element_width": 32,
            "iterations": iterations
        },
        "raw_results": results,
        "metrics": {
            "speedup_vs_basic": cpu_cyc / vec_cyc if vec_cyc > 0 else 0,
            "speedup_vs_unrolled": unroll_cyc / vec_cyc if vec_cyc > 0 else 0,
            "cycles_per_element": {
                "cpu_basic": cpu_cyc / (vector_len * iterations) if (vector_len * iterations) > 0 else 0,
                "cpu_unrolled": unroll_cyc / (vector_len * iterations) if (vector_len * iterations) > 0 else 0,
                "vector": vec_cyc / (vector_len * iterations) if (vector_len * iterations) > 0 else 0
            }
        }
    }
    
    with open(output_file, 'w') as f:
        json.dump(json_data, f, indent=4)
    
    print(f"JSON results saved to {output_file}")

if __name__ == "__main__":
    parser = argparse.ArgumentParser(description='VMAC Performance Analyzer')
    parser.add_argument("-i", "--input", required=True, help="Input log file")
    parser.add_argument("-o", "--output", default="vmac_results.json", help="Output JSON file")
    parser.add_argument("-r", "--report", action="store_true", help="Generate text report")
    parser.add_argument("-p", "--plot", help="Output PNG file for plots")
    parser.add_argument("--vector-len", type=int, default=8, help="Vector length (elements)")
    parser.add_argument("--iterations", type=int, default=10, help="Number of iterations")
    
    args = parser.parse_args()
    
    print(f"\nAnalyzing log file: {args.input}")
    print(f"Configuration: {args.vector_len} elements, {args.iterations} iterations\n")
    
    # Parse the log file
    results = parse_log(args.input)
    
    # Save JSON results
    save_json_results(results, args.vector_len, args.iterations, args.output)
    
    # Generate report if requested
    if args.report:
        report_file = args.output.replace(".json", "_report.txt")
        generate_report(results, args.vector_len, args.iterations, report_file)
    
    # Generate plots if requested
    if args.plot:
        plot_results(results, args.plot)
    
    print("\nAnalysis complete!")
