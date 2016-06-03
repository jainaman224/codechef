#include <iostream>

using namespace std;

int main(){
	long long n,a,b,c,d,ans;
	cin >> n;
	while(n--){
		ans=0;
		cin >> a >> b >> c >> d;
		if(a>=d)
			ans+=d-1;
		else
			ans+=a;
		if(b>=d)
			ans+=d-1;
		else
			ans+=b;
		if(c>=d)
			ans+=d-1;
		else
			ans+=c;
		cout << ans+1 << endl;
	}
}
