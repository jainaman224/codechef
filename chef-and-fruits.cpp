// By Aman Jain(jainaman224)
// 24/1/16

#include <iostream>

using namespace std;

int main(){
	int temp,t,n,m,k;
	cin >> t;
	while(t--){
		cin >> n >> m >> k;
		if(n<m){
			temp=n;
			n=m;
			m=temp;
		}
		if(n>(m+k)){
			cout << n-(m+k) << endl;
		}
		else{
			cout << 0 << endl;
		}
	}
}