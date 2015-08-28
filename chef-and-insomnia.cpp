#include <iostream>

using namespace std;

int main(){
	int a,r,l,t=0,s;
	cin >> a >> r;
	int b[a];
	
	// for input
	for (int i=0;i<a;i++){
		cin >> b[i];
	}

	l=0;
	for (int i=0;i<a-1;i++){
		if (b[i]%b[i+1]==r){
			l+=1;
		}
	}
	int i=1;
	while(i<=l){
		t+=a-l;
		i++;
	}
	s=a*(a+1)/2;
	s=s-t;
	cout << s;
}