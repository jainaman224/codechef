#include <iostream>

using namespace std;

int main(){
	int a;
	cin >> a;
	while(a--){
		long b;
		cin >> b;
		cout << ((b%2==0)?b:b-1) << endl;
	}
}