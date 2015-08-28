#include <iostream>

using namespace std;

int main(){
	int a;
	cin >> a;
	while(a--){
		string b;
		cin >> b;
		int i=0,j=0;
		while(b[i]!='\0'){
			if (b[i]=='4')
				j++;
			i++;
		}
		cout << j << endl;
	}
}