#include <iostream>

using namespace std;

int main(){
	int a,sum,max;
	cin >> a;
	while(a--){
		long b;
		cin >> b;
		sum=b%10;
		b/=10;
		while(b!=0){
			max=b%10;
			b/=10;
		}
		sum+=max;
		cout << sum << endl;
	}
}