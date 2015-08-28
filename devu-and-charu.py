#!/usr/bin/python

a=raw_input().split(' ')
a=map(int, a)
b=raw_input().split(' ')
b.sort()
str=""

for i in range(a[1]):
	c=raw_input().split(' ')
	q=1
	r=1
	for j in range(a-1):
		if (c[j]==c[j+1]):
			q+=1
		else:
			r*=q
			q=1
	
	if c[1] in b:
		d=b.index(c[1])+1
	else:
		d=a[0]+1


	if(c[0]=='<'):
		d=(d-1)*d/2
	elif(c[0]=='>'):
		d=((a[0]+1)*a[0]/2)-((d+1)*d/2)

	if (d>0):
		if(d%2==1):
			str+=c[2]
		else:
			if c[2]=='D':
				str+='C'
			else:
				str+='D'
	else:
		if c[2]=='D':
			str+='C'
		else:
			str+='D'

print str