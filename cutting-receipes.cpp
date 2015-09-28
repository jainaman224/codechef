#include <iostream>

using namespace std;

int main(){
	int a,i;
	cin >> a;
	while(a--){
		int b,d=10001;
		cin >> b;
		int c[b],x;
		for (i=0;i<b;i++){
			cin >> c[i];
			if(c[i]<d)
				d=c[i];
		}
		i=d;
		while(i>0){
			x=0;
			for (int j=0;j<b;j++){
				if (c[j]%i!=0){
					x=1;
					break;
				}
			}
			if(x==0){
				for (int j=0;j<b;j++){
					cout << c[j]/i << " ";
				}
				cout << endl;
				break;
			}
			i--;
		}
	}
}
