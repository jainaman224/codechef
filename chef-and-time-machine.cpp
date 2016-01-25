// By Aman Jain(jainaman224)
// 2/1/15

#include <iostream>
#include <set>

using namespace std;

int main()
{
	int t;
	int a,b,c,d,i; // a - no. of days, b - no. of white keys and c - no. of black keys.
	multiset <int> e,f;
	multiset <int> :: iterator ite,itf;
	cin >> t;
	while(t--)
	{
		long long ans=0;
		e.clear();
		f.clear();
		e.insert(0);
		f.insert(0);
		cin >> a >> b >> c;
		int g[a];
		for(i=0;i<a;i++)
		{
			cin >> g[i];
		}
		for(i=0;i<a;i++)
		{
			cin >> d;
			e.insert(g[i]-d);
		}
		c=c+b;
		while(c--)
		{
			cin >> d;
			f.insert(d);
		}
		ite=e.end();
		--ite;
		itf=f.end();
		--itf;
		for(;itf!=f.begin() && ite!=e.begin();--itf)
		{
			if(*itf<=*ite)
			{
				ans+=*ite-*itf;
				--ite;
			}
		}
		while(ite!=e.begin())
		{
			ans+=*ite;
			--ite;
		}
		cout << ans << endl;
	}
}