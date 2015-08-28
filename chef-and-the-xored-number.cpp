#include <iostream>

using namespace std;

int main(){
	int a,x;
	cin >>a;
	while(a--){
		x=0;
		long long b,d;
		cin >> b;
		d=b;
		if (b==1){
			x=1;
			cout << 2 << endl;
		}
		else{
			while(b>0){
				if(b%2==0){
					x=1;
					cout << -1 << endl;
					break;
				}
				b/=2;
			}
		}
		if(x!=1){
			cout << int(d/2) << endl;
		}
	}
}