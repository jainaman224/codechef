#include <iostream>

using namespace std;

int main(){
	int a;
	cin >> a;
	while(a--){
		long b,c=0;
		cin >> b;
		while(b!=0){
			c*=10;
			c+=(b%10);
			b/=10;
		}
		cout << c << endl;
	}
}