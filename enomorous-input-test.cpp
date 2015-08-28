#include <iostream>

using namespace std;

int main(){
	int a,b,l;
	cin >> a >> b;
	int c[a];
	for (int i=0; i<a; i++){
		cin >> c[i];
		if (c[i]%b==0){
			l++;
		}
	}
	cout << l;
}