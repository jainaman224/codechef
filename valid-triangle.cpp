#include <iostream>

using namespace std;

int main(){
	int a;
	cin >> a;
	while(a--){
		int b,c,d;
		cin >> b >> c >> d;
		if(d==0 || b==0 || c==0 || b+c+d!=180)
			cout << "NO" << endl;
		else
			cout << "YES" << endl;
	}
}