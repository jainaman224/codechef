#include <iostream>
#include <math.h>

using namespace std;

int main(){
	int a,c,j;
	cin >> a;
	int b[a];
	for (int i=0;i<a;i++){
		cin >> b[i];
	}	
	for (int i=0;i<a;i++){
		c=0;
		j=1;
		//to find No. of factors of 5.
		int d=1;
		while (d!=0){
			d=b[i]/pow(5,j);
			c+=d;
			j++;
		}
		cout << c << endl;
	}
}