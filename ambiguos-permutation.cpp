#include <iostream>

using namespace std;

int main(){
	long a=1;
	while(a!=0){
		cin >> a;
		long b[a],c[a],x=1;
		for (int i=0;i<a;i++){
			cin >> b[i];
			c[b[i]-1]=i+1;
		}
		for (int i=0;i<a;i++){
			x=0;
			if(c[i]!=b[i]){
				x=1;
				cout << "not ambiguous" << endl;
				break;
			}
		}
		if(x==0)
			cout << "ambiguous" << endl;
	}
}