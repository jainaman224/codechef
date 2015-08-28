#!/usr/bin/python
a=int(raw_input())
c=[]
for i in range(a):
	b=raw_input().split(' ')
	b=map(int, b)
	d=b[1]*(b[1]+1)/2
	if d<b[0]:
		c.append(-1)
	else:
		i=1
		d=d-b[0]
		while i <= b[1]:
			if (d>=0):
				d-=i
				i+=1
			else:
				c.append(i-2)
				i=b[1]+1

for j in range(a):
	print c[j]