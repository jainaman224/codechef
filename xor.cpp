#include <iostream>

using namespace std;

int main(){
	int a;
	cin >> a;
	int d[a];
	for (int i=0;i<a;i++){
		int l,m;
		cin >> l >> m;

		d[i]=l;
		for (l;l<m;l++){
			d[i]^=(l+1);
		}
	}
		
	for (int i=0;i<a;i++){
		cout << d[i] << endl;
	}
}