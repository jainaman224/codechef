#!/usr/bin/python
a=raw_input().split(' ')
a=map(int, a)
b=[]
for i in range(a[0]):
	b.append(raw_input())
c=int(raw_input())

f=[]
for i in range(c):
	g=raw_input().split(' ')
	g=map(int, g)
	if b[g[0]-1][g[1]-1]=='1':
		if g[1]<len(b[g[0]-1]):
			b[g[0]-1]=b[g[0]-1][0:g[1]-1]+'0'+b[g[0]-1][g[1]:]
		else:
			b[g[0]-1]=b[g[0]-1][0:g[1]-1]+'0'
	else:
		if g[1]<len(b[g[0]-1]):
			b[g[0]-1]=b[g[0]-1][0:g[1]-1]+'1'+b[g[0]-1][g[1]:]
		else:
			b[g[0]-1]=b[g[0]-1][0:g[1]-1]+'1'
l=0
j=0
x=0
for i in range(a[0]):
	if (l<b[i].count('1')):
		l=b[i].count('1')
		j=i+1
	elif (l==b[i].count('1')):
		x=1
		break

if (x==0):
	print j
else:
	print "Tie"

