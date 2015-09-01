#include <iostream>
#include <string.h>

using namespace std;

int main(){
	int a;
	cin >> a;
	while(a--){
		int x=0;
		char b[6];
		cin >> b;
		if (b[0]==0)
			x=1;
		else{
			for (int i=0;i<int((strlen(b)+1)/2);i++){
				if (b[i]!=b[strlen(b)-i-1]){
					x=1;
					break;
				}
			}
		}
		if(x==0)
			cout << "wins" << endl;
		else
			cout << "losses" << endl;
	}
}