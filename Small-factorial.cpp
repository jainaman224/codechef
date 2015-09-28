#include <iostream>

using namespace std;

long factorial(int b){
	if(b==1 || b==0)
		return 1;
	else
		return b*factorial(b-1);
}

int main(){
	int a,b;
	cin >> a;
	while(a--){
		cin >> b;
		cout << factorial(b) << endl;
	}
}