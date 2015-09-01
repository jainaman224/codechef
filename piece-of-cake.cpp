#include <iostream>
#include <string.h>

using namespace std;

int main(){
	int a;
	cin >> a;
	while(a--){
		int b[26]={0},x=0,y,i;
		char s[60];
		cin >> s;
		y=strlen(s);
		for(i=0;i<y;i++){
			b[s[i]-97]++;
		}
		for(i=0;i<26;i++){
			if (b[i]==y/2 && y%2==0){
				cout << "YES" << endl;
				x=1;
				break;
			}
		}
		if(x==0)
			cout << "NO" << endl;
	}
}