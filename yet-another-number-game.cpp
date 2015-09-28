#include <iostream>
using namespace std;

int main(){
	int a;
	cin >> a;
	while(a--){
		long b;
		cin >> b;
		if(b%2==1)
			cout << "BOB" << endl;
		else
			cout << "ALICE" << endl;
	}
}