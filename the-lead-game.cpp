#include <iostream>

using namespace std;

int main(){
	int a,n=0,p=0,l=0,m=0;
	cin >> a;
	int b[2];
	for (int i=0;i<a;i++){
		cin >> b[0] >> b[1];
		n+=b[0];
		p+=b[1];
		int c=n-p;
		if (c>0){
			if(l<c){
				l=c;
			}
		}
		else{
			if(m<(-c)){
				m=(-c);
			}
		}
	}
	if (l>m){
		cout << "1 " << l;
	}
	else{
		cout << "2 " << m;
	}
}