#include <iostream>
#include <math.h>
#include <stdio.h>

using namespace std;

int main(){
	long a;
	cin >> a;
	long double e;
	long double c;
	long long b;
	while(a--){
		cin >> b >> c;
		e=1000000000*(pow(-c,b)-1)/(-c-1);
		printf("%.8Lf %.8Lf\n",e,(1000000000-e));
	}
}