a=int(raw_input())
while(a>0):
	a-=1;
	b=int(raw_input())
	c=raw_input().split(' ')
	c=map(int, c)
	d=min(c)
	print d*(b-1)