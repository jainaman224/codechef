#include <iostream>

using namespace std;

int main(){
	int a;
	long b,c,d,low1,low2;
	cin >> a;
	while(a--){
		low1=low2=100000000;
		cin >> b;
		while(b--){
			cin >> c;
			if(c<low1){
				low2=low1;
				low1=c;
			}
			else if(c<low2)
				low2=c;
		}
		cout << low1+low2 << endl;
	}
}