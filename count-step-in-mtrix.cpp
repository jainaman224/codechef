#include <iostream>
#include <stdlib.h>

using namespace std;

int main(){
	int a;
	cin >> a;
	while(a--){
		int b;
		cin >> b;
		long c[b][b],d[b*b][2],sum=0;
		for(int i=0;i<b;i++){
			for(int j=0;j<b;j++){
				cin >> c[i][j];
				d[c[i][j]-1][0]=i;
				d[c[i][j]-1][1]=j;
			}
		}
		for(int i=0;i<b*b-1;i++){
			sum+=abs(d[i+1][0]-d[i][0])+abs(d[i+1][1]-d[i][1]);
		}
		cout << sum << endl;
	}
}