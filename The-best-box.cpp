#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

int main(){
	int a;
	cin >> a;
	while(a--){
		int b,c;
		double side,volume;
		cin >> b >> c;
		side=b-sqrt(b*b-24*c);
		side/=12;
		volume=side*side*side+c*side/2-side*side*b/4;
		cout << fixed << setprecision(2) << volume << endl;
	}
}