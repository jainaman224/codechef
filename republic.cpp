#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int a;
	cin >> a;
	int c[a],l[a];
	int b[a][1000];
	for (int i=0;i<a;i++){
		cin >> c[i];
		l[i]=0;
		for (int j=0;j<c[i];j++){
			cin >> b[i][j];
			l[i]+=b[i][j];
		}
	}
	for (int i=0;i<a;i++){
		if (l[i]%c[i]!=0){
			cout << "-1" << endl;
		}
		else{
			int d=0,e=l[i]/c[i];
			for (int j=0;j<c[i];j++){
				d+=abs(e-b[i][j]);
			}
			cout << d << endl;
		}
	}
}