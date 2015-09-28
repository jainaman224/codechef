#include <iostream>

using namespace std;

int main(){
	int a;
	cin >> a;
	while(a--){
		long b,c,i,k,j;
		long long sum=0;
		char d[5];
		cin >> b >> c;
		for(k=b;k<=c;k++){
			j=0;
			i=k;
			while(i>0){
				d[j]=i%10;
				i/=10;
				j++;
			}
			if(j<4){
				if(d[j-1]==d[0]){
					sum+=k;
				}
			}
			else{
				if(d[j-1]==d[0] && d[j-2]==d[1])
					sum+=k;
			}
		}
		cout << sum << endl;
	}
}