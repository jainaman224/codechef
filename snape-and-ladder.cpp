#include <iostream>
#include <math.h>
#include <stdlib.h>

using namespace std;

int main(){
	int a;
	cin >> a;
	while(a--){
		int x,y;
		float m,n,p;
		cin >> x >> y;
		p=pow(x,2)-pow(y,2);
		m=sqrt(abs(p));
		n=sqrt(pow(x,2)+pow(y,2));
		cout << m << " " << n << endl;
	}
}