#include <iostream>

using namespace std;

int main(){
	int a;
	cin >> a;
	while (a--){
		int b;
		cin >> b;
		cout << ( (b<10) ? ("What an obedient servant you are!") : "-1" ) << endl;
	}
}