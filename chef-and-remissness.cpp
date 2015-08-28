#include <iostream>

using namespace std;

int main(){
	int a;
	cin >> a;
	while(a--){
		int x,y;
		cin >> x >> y;
		
		if (x>y)
			cout << x;
		else
			cout << y;
		
		cout << " " << x+y << endl;
	}
	return 0;
}