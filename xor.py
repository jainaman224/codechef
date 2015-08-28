#!/usr/bin/python
a=int(raw_input())
d=[]
for i in xrange(a):
	l=raw_input().split(' ')
	l=map(int, l)
	if l[0]<l[1]:
		d.append(l[0])
		for j in xrange(l[0],l[1]):
			d[i]^=(j+1)
	elif l[1]<l[0]:
		d.append(l[1])
		for j in xrange(l[1],l[0]):
			d[i]^=(j+1)
	else:
		d.append(0)

for i in range(a):
	print d[i]