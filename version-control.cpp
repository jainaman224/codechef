#include <iostream>

using namespace std;

int main(){
	int a;
	cin >> a;
	while(a--){
		int b,c,d;
		cin >> b >> c >> d;

		int e[b]={0},f[c],g[d],ig=0,uig=0;
		for (int i=0;i<c;i++){
			cin >> f[i];
			e[f[i]-1]++;
		}

		for (int i=0;i<d;i++){
			cin >> g[i];
			e[g[i]-1]++;
		}

		for(int i=0;i<b;i++){
			if(e[i]==0)
				ig++;
			else if(e[i]==2)
				uig++;
		}

		cout << uig << " " << ig << endl;
	}
}