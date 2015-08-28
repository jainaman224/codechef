#include <iostream>

using namespace std;

int main(){
	int a,j;
	cin >> a;
	while(a--){
		long b;
		cin >> b;
		j=b/2048;
		b=b%2048;
		while(b!=0){
			j+=b%2;
			b/=2;
		}
		cout << j << endl;
	}
}