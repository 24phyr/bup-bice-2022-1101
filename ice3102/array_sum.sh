#!/bin/bash

my_array=(10 20 30 40)

sum=0

for num in "${my_array[@]}"; do
	echo "sum=$((sum + num))"
done

echo "Sum: $sum"
