#include <iostream>

using namespace std;

int main(){
	int a,c,x;
	cin >> a;
	while(a--){
		x=0;
		string b;
		cin >> c >> b;
		for(int i=0;i<c;i++){
			if(b[i]=='Y'){
				x=1;
				cout << "NOT INDIAN" << endl;
				break;
			}
			else if(b[i]=='I'){
				x=1;
				cout << "INDIAN" << endl;
				break;
			}
		}
		if(x!=1){
			cout << "NOT SURE" << endl;
		}
	}
}