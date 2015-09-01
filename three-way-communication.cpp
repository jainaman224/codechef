#include <iostream>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main(){
	int a;
	cin >> a;
	while(a--){
		long long b[3],c[3],i=0,d,e=3;
		cin >> d;
		while(e--){
			cin >> b[e] >> c[e];
		}
		if(sqrt(pow(b[0]-b[1],2)+pow(c[0]-c[1],2))<=d)
			i++;
		if(sqrt(pow(b[0]-b[2],2)+pow(c[0]-c[2],2))<=d)
			i++;
		if(sqrt(pow(b[2]-b[1],2)+pow(c[2]-c[1],2))<=d)
			i++;

		if(i>=2)
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
}