#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

void scanint(int &x)
{
	register int  c = getchar_unlocked();
	x = 0;
	for(; (c < 48 || c > 57); c = getchar_unlocked());
	for(; (c > 47 && c < 58); c = getchar_unlocked())
		x = (x << 1) + (x << 3) + c - 48;
}

int main(){
	long long ans = 0;
	long i,n;
	int a[200000],c[200000],b[1000]={0};
	cin >> n;
	for(i=0;i<n;i++){
		scanint(a[i]);
		b[a[i]-1]++;
	}
	for(i=1;i<1000;i++){
		b[i]+=b[i-1];
	}
	for(i=0;i<n;i++){
		c[b[a[i]-1]-1]=a[i];
		b[a[i]-1]--;
	}
	for(i=n-1;i>=0;i--)
	{	
		//cout << c[i] << " ";
		ans += (1 + 2 * i - n) * c[i];
		//cout << ans << " ";
	}
	cout << ans;
	return 0;
}
