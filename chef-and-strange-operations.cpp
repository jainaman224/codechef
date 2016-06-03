// By Aman Jain(jainaman224)
// 5/2/16

#include <iostream>
#include <cstdio>

using namespace std;

#define y 1000000007

void scanlong(long long &x);

int main()
{
	long long m,a[100000],i,t,n,z,j,count;
	scanlong(t);
	while(t--)
	{
		scanlong(n);
		scanlong(z);
		scanlong(m);
		m %= y;
		for(i = 0; i < n; i++)
		{
			scanlong(a[i]);
			a[i] %= y;
		}
		if(z == 1)
			cout << a[0] << endl;
		else if(z == 2)
			cout << (a[1] + m * a[0]) % y << endl;
		else{
			z--;
			for(i = 0; i < m; i++)
			{
				for(j = 1; j <= z; j++)
				{
					a[j] += a[j-1];
					a[j] %= y;
				}
			}
			cout << (a[z] % y) << endl;
		}
	}
}

void scanlong(long long &x)
{
	register int c = getchar_unlocked();
	x = 0;
	for(; (c < 48 || c > 57); c = getchar_unlocked());
	for(; (c > 47 && c < 58); c = getchar_unlocked())
		x = (x << 1) + (x << 3) + c - 48;
}