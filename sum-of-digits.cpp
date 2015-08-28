#include <iostream>

using namespace std;

int main(){
	int a;
	cin >> a;
	while(a--){
		long long b;
		int sum=0;
		cin >> b;
		while(b!=0){
			sum+=b%10;
			b/=10;
		}
		cout << sum << endl;
	}
}