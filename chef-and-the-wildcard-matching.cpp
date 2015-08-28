#include <iostream>

using namespace std;

int main(){
	int a,x;
	cin >> a;
	while(a--){
		x=0;
		string b,c;
		cin >> b>> c;
		for (int i=0;i<b.length();i++){
			if (b[i]!=c[i] && (b[i]!='?' && c[i]!='?')){
				x=1;
				break;
			}
		}
		cout << ((x==1) ? "No" : "Yes" ) << endl;
	}
}