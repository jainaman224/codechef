#include <iostream>
#include <cstdio>

using namespace std;

void scanlong(long long &x)
{
	register int c = getchar_unlocked();
	x = 0;
	for(; (c < 48 || c > 57); c = getchar_unlocked());
	for(; c > 47 && c < 58; c = getchar_unlocked())
	{
		x = (x << 1) + (x << 3) + c - 48;
	}
}

int main(){
	long long i,y=0,n,h,a[100000];
	int t,x=0;
	scanlong(n);
	scanlong(h);
	for(i=0;i<n;i++)
		scanlong(a[i]);
	cin >> t;
	while(t != 0){
		if(t == 1 && y != 0)
			y--;
		else if(t == 2 && y != n-1)
			y++;
		else if(t == 3 && a[y] != 0 && x == 0)
		{
			x = 1;
			a[y]--;
		}
		else if(t == 4 && a[y] < h && x == 1)
		{
			x = 0;
			a[y]++;
		}
		cin >> t;
	}
	for(i=0;i<n;i++)
		cout << a[i] << " ";
	cout << endl;
	return 0;
}
