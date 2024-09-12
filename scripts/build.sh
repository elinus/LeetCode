#!/bin/bash

# Usage: ./scripts/build.sh

echo "Building all solutions..."

# Iterate through all problem directories by language and category
for category in problems/*; do
  if [ -d "$category" ]; then
    for lang_dir in "$category"/*; do
      if [ -d "$lang_dir" ]; then
        for problem_file in "$lang_dir"/[0-9]*_*.{cpp,py,java,rs}; do  # Match pattern <number>_<name>.<extension>
          [ -e "$problem_file" ] || continue  # If no files match, continue

          extension="${problem_file##*.}"
          filename=$(basename -- "$problem_file")
          problem_name="${filename%.*}"

          # Build C++ solution
          if [ "$extension" == "cpp" ]; then
            echo "Building C++ solution for $problem_name in $lang_dir..."
            g++ "$problem_file" -o "${lang_dir}/${problem_name}_cpp"
          fi

          # Python doesn't need a build step, but check syntax
          if [ "$extension" == "py" ]; then
            echo "Checking Python solution for $problem_name in $lang_dir..."
            python3 -m py_compile "$problem_file"
          fi

          # Build Java solution
          if [ "$extension" == "java" ]; then
            echo "Building Java solution for $problem_name in $lang_dir..."
            javac "$problem_file" -d "$lang_dir"
          fi

          # Build Rust solution
          if [ "$extension" == "rs" ]; then
            echo "Building Rust solution for $problem_name in $lang_dir..."
            rustc "$problem_file" -o "${lang_dir}/${problem_name}_rust"
          fi
        done
      fi
    done
  fi
done

echo "Build process completed."
