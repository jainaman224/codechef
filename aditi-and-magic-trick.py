#!/usr/bin/python

a=int(raw_input())
d=[]
for j in range(a):
	b=int(raw_input())
	c=1
	m=1
	i=1
	while(c<b):
		i+=1
		n=c+1
		c+=m
		m=n
	d.append(i)

for i in range(a):
	print d[i]