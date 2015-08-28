#include <iostream>

using namespace std;

int main(){
	int a,l,s,i=0,n=0,k=0;
	cin >> a;
	string m[2*a];
	cin.get();
	for (n; n<2*a; n++){
		cin >> m[n];
	}
	while (i<a){
		l=0;
		s=0;
		k=2*i;
		for (int j=0;m[k][j]!='\0';j++){
			if (m[k][j]=='#'){

				if(k%2==0){
					k++;	
				}
				else{
					k--;
				}

				if (m[k][j]=='#'){
					cout << "No" << endl;
					goto nn;
				}
				l++;
			}
		}

		k=2*i+1;
		for (int j=0;m[k][j]!='\0';j++){
			if (m[k][j]=='#'){

				if(k%2==0){
					k++;	
				}
				else{
					k--;
				}
				
				if (m[k][j]=='#'){
					cout << "No" << endl;
					goto nn;
				}
				s++;
			}	
		}

		if (l>s){
			l=s;
		}

		cout << "Yes" << endl << l << endl;

		nn: i++;
	}
}