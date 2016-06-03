#include <iostream>
#include <cstdio>

using namespace std;

int main(){
	char a;
	int b[3]={0},n,t;
	cin >> t;
	while(t--){
		cin >> n;
		while(n--){
			a=getchar_unlocked();
			if(a=='R')
				b[0]++;
			else if(a=='G')
				b[1]++;
			else if(a=='B')
				b[2]++;
			else
				n++;
		}
		if(b[0]>b[1]){
			if(b[0]>b[2])
				cout << b[1]+b[2] << endl;
			else
				cout << b[1]+b[0] << endl;
		}
		else{
			if(b[1]>b[2])
				cout << b[2]+b[0] << endl;
			else
				cout << b[1]+b[0] << endl;
		}
		b[0]=b[1]=b[2]=0;
	}
}
