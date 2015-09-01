#include <iostream>

using namespace std;

int main(){
	int a;
	long long b,c,d,f;
	cin >> a;
	while(a--){
		d=10000001;
		cin >> b;
		f=b;
		while(f--){
			cin >> c;
			if(c<d)
				d=c;
		}
		cout << (d*(b-1)) << endl;
	}
}