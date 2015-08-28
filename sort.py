#!/usr/bin/python
a=int(raw_input())
b=[]
for i in range(a):
	b.append(int(raw_input()))

b.sort()

for i in range(a):
	print b[i]