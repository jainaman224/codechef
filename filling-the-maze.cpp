#include <iostream>
#include <stdio.h>

using namespace std;

int main(){
	int a;
	cin >> a;
	while(a--){
		int b,c;
		double e=1,f=1;
		long double ans=0;
		int x;
		cin >> b >> c;
		char d[b+2][c+2];

		for(int i=0;i<b+2;i+=b+1){
			for(int j=0;j<b+2;j+=b+1)
				d[i][j]='x';
		}
		
		for(int i=1;i<b+1;i++){
			x=0;
			for(int j=1;j<c+1;j++){
				cin >> d[i][j];
				d[1][1]='1';
				if (d[i][j]=='o'){
					e++;
				}

				if ((d[i-1][j]=='1' || d[i][j-1]=='1') && d[i][j]!='#'){
					d[i][j]='1';
					f++;
				}
			}
		}
	
		for(int i=1;i<b+1;i++){
			for(int j=1;j<c+1;j++){
				if((d[i-1][j]=='1' || d[i+1][j]=='1' || d[i][j+1]=='1' || d[i][j-1]=='1') && d[i][j]!='1' && d[i][j]!='#'){
					d[i][j]='1';
					f++;
				}
			}
		}
		ans=(f/e)+((e-f)/e)*(e-f+1);
		printf("%.9Lf\n",ans);
	}
}