#include <iostream>

using namespace std;

int main(){
	int a;
	cin >> a;
	while(a--){
		float c;
		long b,d;
		cin >> b >> c >> d;
		if(b>50 && c<0.7 && d>5600)
			cout << 10 << endl;
		else if(b>50 && c<0.7)
			cout << 9 << endl;
		else if(c<0.7 && d>5600)
			cout << 8 << endl;
		else if(b>50 && d>5600)
			cout << 7 << endl;
		else if(b>50 || c<0.7 || d>5600)
			cout << 6 << endl;
		else
			cout << 5 << endl;
	}
}