#!/bin/bash

# Usage: ./scripts/run_tests.sh <category> <problem_number>

category=$1
problem_number=$2

if [ -z "$category" ] || [ -z "$problem_number" ]; then
  echo "Usage: ./scripts/run_tests.sh <category> <problem_number>"
  exit 1
fi

problem_dir="problems/$category/problem_$problem_number"

if [ ! -d "$problem_dir" ]; then
  echo "Problem directory '$problem_dir' does not exist."
  exit 1
fi

# Run C++ solution
if [ -f "${problem_dir}/cpp/solution.cpp" ]; then
  g++ "${problem_dir}/cpp/solution.cpp" -o "${problem_dir}/cpp/solution_cpp" && \
  echo "Running C++ solution..." && \
  "${problem_dir}/cpp/solution_cpp"
fi

# Run Python solution
if [ -f "${problem_dir}/python/solution.py" ]; then
  echo "Running Python solution..." && \
  python3 "${problem_dir}/python/solution.py"
fi

# Run Java solution
if [ -f "${problem_dir}/java/Solution.java" ]; then
  javac "${problem_dir}/java/Solution.java" && \
  echo "Running Java solution..." && \
  java -cp "${problem_dir}/java" Solution
fi

# Run Rust solution
if [ -f "${problem_dir}/rust/solution.rs" ]; then
  rustc "${problem_dir}/rust/solution.rs" -o "${problem_dir}/rust/solution_rust" && \
  echo "Running Rust solution..." && \
  "${problem_dir}/rust/solution_rust"
fi
