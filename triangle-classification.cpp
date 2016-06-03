// By Aman Jain(jainaman224)
// 31/1/16

#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int a,t,x1,x2,x3,y1,y2,y3;
	long long l1,l2,l3;
	string a,b;
	cin >> a;
	cin >> t;
	while(t--){
		cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
		l1 = (x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
		l2 = (x1-x3)*(x1-x3)+(y1-y3)*(y1-y3);
		l3 = (x3-x2)*(x3-x2)+(y3-y2)*(y3-y2);
		if(l1 == l2 || l2 == l3 || l3 == l1){
			a = "Isoceles ";
		}
		else
			a = "Scalene ";

		
		if(a==1)
			cout << a << "triangle" << endl;
		else
			cout << a << b << "triangle" << endl;
	}
}