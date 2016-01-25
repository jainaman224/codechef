#include <iostream>
#include <stdio.h>

using namespace std;

void scanint(long long &x){
    register int c=getchar_unlocked();
    x=0;
    for(;(c<48 || c>57);c=getchar_unlocked());
    for(;c>47 && c<58;c=getchar_unlocked()){
    	x=(x<<1)+(x<<3)+c-48;
    }
}


int main(){
	int t;
	long long a,b,c,d,x;
	cin >> t;
	while(t--){
		scanint(a);
		scanint(b);
		scanint(c);
		d=(c*(c+1))/2;
		if(a>b)
			x=b;
		else
			x=a;

		if(x<d){
			cout << a-x+b-x << endl;
		}
		else
			cout << a+b-d-d << endl;
	}
}