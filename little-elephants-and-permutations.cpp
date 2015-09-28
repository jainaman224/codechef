#include <iostream>

using namespace std;

int main(){
	int a;
	cin >> a;
	while(a--){
		int b,c,d,i=0,j=0,e=0;
		cin >> b;
		cin >> d;
		b--;
		while(b--){
			cin >> c;
			if(d>c){
				i++;
			}
			if(e>c){
				j=1;
			}
			if(e<d){
				e=d;
			}
			d=c;
		}
		if(j==1)
			cout << "NO" << endl;
		else
			cout << "YES" << endl;
	}
}