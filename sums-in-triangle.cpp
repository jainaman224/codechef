#include <iostream>

using namespace std;

int main(){
	int a,i,j,c;
	cin >> a;
	int b[a][a];
	while(a--){
		cin >> c;
		for (i=0;i<c;i++){
			for (j=0;j<=i;j++){
				cin >> b[i][j];
			}
		}	
		for(i=c-2;i>=0;i--){
			for(j=0;j<=i;j++){
				b[i][j]+=((b[i+1][j]>b[i+1][j+1])?b[i+1][j]:b[i+1][j+1]);
    		}
    	}
    	cout << b[0][0] << endl;
	}
}