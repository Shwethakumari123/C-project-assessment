#!/bin/bash

echo "enter two numbers to add"

read num
sum=0

for i in $num
do
sum=`expr $sum + $i`
done
echo "sum of $num is $sum"
