#include <iostream>

using namespace std;

int main(){
	int a;
	cin >> a;
	while (a--){
		int b[100]={0},c,d,e,sum=0;
		cin >> c >> d >> e;
		int f[c];
		for (int i=0;i<c;i++){
			cin >> f[i];
			for(int j=(((f[i]-d*e)>0)?(f[i]-d*e-1):0);j<(((f[i]+d*e)<100)?(f[i]+d*e):100);j++){
				b[j]--;
			}
		}
		for (int i=0;i<100;i++){
			if (b[i]==0)
				sum++;
		}
		cout << sum << endl;
	}
}