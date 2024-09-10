#!/bin/bash

# Usage: ./scripts/build.sh

echo "Building all solutions..."

# Iterate through all problem directories
for category in problems/*; do
  if [ -d "$category" ]; then
    for problem_dir in "$category"/*; do
      if [ -d "$problem_dir" ]; then
        # Build C++ solution
        if [ -f "${problem_dir}/cpp/solution.cpp" ]; then
          echo "Building C++ solution in ${problem_dir}..."
          g++ "${problem_dir}/cpp/solution.cpp" -o "${problem_dir}/cpp/solution_cpp"
        fi

        # Check Python solution
        if [ -f "${problem_dir}/python/solution.py" ]; then
          echo "Checking Python solution in ${problem_dir}..."
          python3 -m py_compile "${problem_dir}/python/solution.py"
        fi

        # Build Java solution
        if [ -f "${problem_dir}/java/Solution.java" ]; then
          echo "Building Java solution in ${problem_dir}..."
          javac "${problem_dir}/java/Solution.java" -d "${problem_dir}/java"
        fi

        # Build Rust solution
        if [ -f "${problem_dir}/rust/solution.rs" ]; then
          echo "Building Rust solution in ${problem_dir}..."
          rustc "${problem_dir}/rust/solution.rs" -o "${problem_dir}/rust/solution_rust"
        fi
      fi
    done
  fi
done

echo "Build process completed."
