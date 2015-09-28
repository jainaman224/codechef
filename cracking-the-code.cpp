#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

int main(){
	long i,k,s,a,b,m,l;
	cin >> i >> k >> s >> a >> b;
	l=int(abs(k-i)/2);
	m=abs(k-i)%2;
	long double z;
	if(k>=i){
		z=pow(2,4*l+m-s)*pow(sqrt(2),m)*(a+b*pow(sqrt(3),m));
	}
	else{
		z=pow(2,-4*l-2*m-s)*pow(sqrt(2),-m)*(a+b*pow(sqrt(3),m));
	}
	printf("%.4Lf\n",z);
}