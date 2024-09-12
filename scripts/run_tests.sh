#!/bin/bash

# Usage: ./scripts/run_tests.sh

echo "Running all tests..."

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

          # Run C++ solution
          if [ "$extension" == "cpp" ]; then
            if [ -f "${lang_dir}/${problem_name}_cpp" ]; then
              echo "Running C++ solution for $problem_name..."
              ./"${lang_dir}/${problem_name}_cpp"
            fi
          fi

          # Run Python solution
          if [ "$extension" == "py" ]; then
            echo "Running Python solution for $problem_name..."
            python3 "$problem_file"
          fi

          # Run Java solution
          if [ "$extension" == "java" ]; then
            class_name="${problem_name%%_*}"
            echo "Running Java solution for $problem_name..."
            java -cp "$lang_dir" "$class_name"
          fi

          # Run Rust solution
          if [ "$extension" == "rs" ]; then
            if [ -f "${lang_dir}/${problem_name}_rust" ]; then
              echo "Running Rust solution for $problem_name..."
              ./"${lang_dir}/${problem_name}_rust"
            fi
          fi
        done
      fi
    done
  fi
done

echo "All tests executed."
