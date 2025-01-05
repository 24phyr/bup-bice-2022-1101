#!/bin/bash

echo "Choose Operation"

echo "a) Addition"
echo "b) Subtraction"
echo "c) Division"
echo "d) Multiplication"

read choice

echo "Enter 1st integer:"
read n1
echo "Enter 2nd integer:"
read n2

add=$((n1+n2))
sub=$((n1-n2))
div=$((n1/n2))
mul=$((n1*n2))

case $choice in
	a) echo "$add" ;;
	b) echo "$sub" ;;
	c) echo "$div" ;;
	d) echo "$mul" ;;
	*) echo "Invalid Operation" ;;
esac
