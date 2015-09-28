#include <iostream>
#include <math.h>

using namespace std;

int main(){
	long a;
	int m;
	cin >> a >> m;
	while(a--){
		long b;
		long long e;
		int c;
		cin >> b >> c;
		b%=m;
		e=pow(b,c);
		e%=m;
		cout << e << endl;
	}
}