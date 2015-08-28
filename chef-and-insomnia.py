#!/usr/bin/python

a=raw_input().split(' ')
a=map(int, a)
c=[]
d=[]
e=raw_input().split(' ')
e=map(int, e)
for i in range(a[0]):
	c.append(e[i])

#to make a list of all contigous subsets
for i in range(1,a[0]+1):
	for j in range(a[0]-i+1):
		d.append(c[0+j:i+j])
print d

#to check make subset of bad pair
if [5,3] in d:
	print d.index([5,3])
	d.remove([5,3])
print d.index([5,3])