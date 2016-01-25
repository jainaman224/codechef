#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int a,i;
	long b,c,x;
	cin >> a;
	while(a--){
		cin >> b >> c;
		x=b;
		if(b==1)
			cout << "Yes" << endl;
		else if(c==0)
			cout << "No 1" << endl;
		else if(c==1)
			cout << "Yes" << endl;
		else if(b%c==0)
			cout << "No " << b/c << endl;
		else{
			i=2;
			while(b%i==0 && c%i==0){
				b/=i;
				c/=i;
			}
			while(c%i==0){
				c/=i;
			}
			i++;
			while(i<=sqrt(c)){
				while(b%i==0 && c%i==0){
					b/=i;
					c/=i;
				}
				while(c%i==0){
					c/=i;
				}
				i+=2;
			}
			if(b%c==0){
				b/=c;
			}
			if(b==x)
				cout << "Yes" << endl;
			else
				cout << "No " << b << endl;
		}
	}
}
