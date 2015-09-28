a=int(raw_input())
while(a>0):
	b=int(raw_input())
	c=raw_input().split(' ')
	c=map(int,c)
	d=[c[0]]
	j=0
	for i in range(1,b):
		if c[i]>=d[j]:
			d.append(c[i])
			j+=1
		elif c[i]<d[j]:
			k=j
			while k>=0:
				if d[k]<=c[i]:
					d[k+1]=c[i]
					break
				elif k==0:
					d[k]=c[i]
				k-=1
	print j+1,
	for i in range(0,j+1):
		print d[i],
	print " "
	a-=1