#!/bin/bash

# Usage: ./scripts/build.sh <category> <problem_number>

category=$1
problem_number=$2

if [ -z "$category" ] || [ -z "$problem_number" ]; then
  echo "Usage: ./scripts/build.sh <category> <problem_number>"
  exit 1
fi

problem_dir="problems/$category/problem_$problem_number"

if [ ! -d "$problem_dir" ]; then
  echo "Problem directory '$problem_dir' does not exist."
  exit 1
fi

# Build C++ solution
if [ -f "${problem_dir}/cpp/solution.cpp" ]; then
  echo "Building C++ solution..." && \
  g++ "${problem_dir}/cpp/solution.cpp" -o "${problem_dir}/cpp/solution_cpp" || \
  echo "Failed to build C++ solution."
fi

# Build Java solution
if [ -f "${problem_dir}/java/Solution.java" ]; then
  echo "Building Java solution..." && \
  javac "${problem_dir}/java/Solution.java" || \
  echo "Failed to build Java solution."
fi

# Build Rust solution
if [ -f "${problem_dir}/rust/solution.rs" ]; then
  echo "Building Rust solution..." && \
  rustc "${problem_dir}/rust/solution.rs" -o "${problem_dir}/rust/solution_rust" || \
  echo "Failed to build Rust solution."
fi

echo "Build complete."
