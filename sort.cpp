#include <iostream>

using namespace std;

int main(){
	int a;
	cin >> a;
	int b[a];
	for (int i=0;i<a;i++){
		cin >> b[i];
	}
	for (int i=a;i>0;i--){
		for (int j=0;j<i;j++){
			if (b[j]>b[j+1]){
				int d=b[j+1];
				b[j+1]=b[j];
				b[j]=d;
			}
		}		
	}
	for (int i=0;i<a;i++){
		cout << b[i] << endl;
	}
}