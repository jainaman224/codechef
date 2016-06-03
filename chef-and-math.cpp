// By Aman Jain(jainaman224)
// 13/5/16

#include <iostream>

using namespace std;

#define x 1000000007

int main(){
	int i;
	long fib[44],sum,ans;
	fib[0]=1;
	fib[1]=2;
	for(i=2;i<44;i++){
		fib[i]=fib[i-1]+fib[i-2];
		cout << fib[i] << endl;
	}
	int t;
	long a,b;
	long k[10][2];
	cin >> t;
	while(t--){
		ans = sum = 0;
		cin >> a >> b;
		for(i=0;i<b-1;i++)
			k[i][0]=k[i][1]=1;
		k[i][0]=fib[43];
		k[i][1]=43;
		sum = b-1+fib[43];
		if(sum>a)
			
	}
	return 0;
}