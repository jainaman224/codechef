#include <iostream>
#include <string>

using namespace std;

int main(){
	int a;
	cin >> a;
	while(a--){
		string b;
		cin >> b;
		int num=0,i;
		for(i=0;i<b.length();i++){
			if(b[i]=='A' || b[i]=='D' || b[i]=='O' || b[i]=='P' || b[i]=='Q' || b[i]=='R')
				num++;
			else if(b[i]=='B')
				num+=2;
		}
		cout << num << endl;
	}
}