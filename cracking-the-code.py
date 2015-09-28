from math import sqrt
a=raw_input().split(' ')
a=map(int,a)
b=raw_input().split(' ')
b=map(int,b)
m=(a[1]-a[0])%2
l=4*int((a[1]-a[0])/2)+m-a[2]
print ("%.4f" % round(pow(2,l)*pow(sqrt(2),m)*(b[0]+b[1]*pow(sqrt(3),m)),4))