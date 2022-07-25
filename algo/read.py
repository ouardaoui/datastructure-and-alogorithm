#!/usr/bin/env  python3

with open('data.txt') as f:
    lines = f.readlines()

int_list = [int(i) for i in lines]

for j in range(0,100000): 
    print(int_list[j])
