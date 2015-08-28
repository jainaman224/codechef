#include <iostream>

using namespace std;

int main(){
	int a,b;
	cin >> a;
	while(a--){
		cin >> b;
		cout << ((b/2)-1)*(b/2)/2 << endl;
	}
}