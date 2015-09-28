a=int(raw_input())
while(a>0):
	b=raw_input().split(' ')
	b=map(int,b)
	c=raw_input().split(' ')
	while(b[1]>0):
		d=raw_input().split(' ')
		for i in range(0,b[0]):
			if c[i] in d:
				c[i]="YES"
		b[1]-=1
	for i in range(0,b[0]):
		if c[i]=="YES":
			print "YES",
		else:
			print "NO",
	print " "
	a-=1