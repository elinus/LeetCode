#!/bin/bash

for file in *.{cpp,rs}; do
  [ -e "$file" ] || continue
  
  new_name="${file//-/_}"
  
  if [ "$file" != "$new_name" ]; then
    mv "$file" "$new_name"
    echo "Renamed: $file -> $new_name"
  fi
done