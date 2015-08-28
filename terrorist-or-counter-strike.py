#!/usr/bin/python
c=int(raw_input())

for k in range(c):
	b=raw_input()
	a=list(b)
	a.sort()
	j=1

	for i in range(len(a)-1):
		if a[i]!=a[i+1]:
			j+=1

	if j%2==1:
		print "Counter Terrorist"
	else:
		print "Terrorist"