#include <iostream>

using namespace std;

int main(){
	int a,b,c,i,x,y,max;
	cin >> a;
	while(a--){
		max=1;
		i=2;
		cin >> b >> c;
		x=b;
		y=c;
		if(b<c){
			b=c;
			c=x;
		}
		while(i<=c){
			if(b%i==0 && c%i==0){
				b/=i;
				c/=i;
				max*=i;
				i--;
			}
			i++;
		}
		cout << (x*y)/(max*max) <<  endl;
	}
}