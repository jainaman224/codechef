#include <iostream>

using namespace std;

int main(){
	int a,c,d,e,g;
	cin >> a;
	while(a--){
		cin >> g >> c;
		char f[g]={0};
		while(c--){
			cin >> d >> e;
			if(d!=e){
				f[d]='(';
				f[e]=')';
			}
		}
		int k=0,b=0;
		while(b<g){
			if(f[b]==')'){
				k--;
			}
			else if(f[b]=='('){
				k++;
			}
			else{
				if (k>0){
					f[b]=')';
					k--;
				}
				else{
					f[b]='(';
					k++;
				}
			}
			cout << f[b];
			b++;
		}
		cout << endl;
	}
}