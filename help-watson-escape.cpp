// Aman Jain (jainaman224)
// 1/4/16

#include <iostream>
#define x 1000000007

using namespace std;

int main(){
	int t;
	long long i,n,k,ans,temp;
	cin >> t;
	while(t--){
		cin >> n >> k;
		ans=k;
		temp =(k-1);
		n--;
		while(n){
			if(n&1){
				ans*=temp;
				ans%=x;
			}
			temp*=temp;
			temp%=x;
			n = n >> 1;
		}
		cout << ans << endl;
	}
}
