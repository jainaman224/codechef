// By Aman Jain(jainaman224)
// 17/4/16

#include <iostream>

using namespace std;

int main(){
	int test;
	long left,right,i,temp,temp1;
	long long ans;
	cin >> test;
	while(test--){
		cin >> left >> right;
		ans=0;
		for(i=1;i<=right;i+=2){
			ans+=((right/i)-(left/i))*i;
			if(left%i == 0)
				ans+=i;
			//cout << ans << " ";
		}
		cout << ans << endl;
	}
	return 0;
}