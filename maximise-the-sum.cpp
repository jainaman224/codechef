// By Aman Jain(jainaman224)
// 7/3/16

#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

int main()
{
	long long ans, temp, k, t, n, i, a[100000], b;
	cin >> t;
	while(t--)
	{
		ans = temp = 0;
		cin >> n;
		cin >> k;
		for(i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		for(i = 0; i < n; i++)
		{
			cin >> b;
			ans += a[i] * b;
			if(abs(b) > temp)
				temp = abs(b);
		}
		// cout << ans << " " << extra << endl;
		ans += k * temp;
		cout << ans << endl;
	}
}

