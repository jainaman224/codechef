// By Aman jain(jainaman224)
// 1/1/15

#include <iostream>
#include <stdio.h>
#include <limits.h>
#include <cmath>

using namespace std;

int main()
{
	int a,b,t,i,j; // t is no. of test cases, a is no. of rows and b is no. of columns.
	char d;
	cin >> t;
	while(t--)
	{
		cin >> a >> b;
		int ll=INT_MAX,rr=0,tt=INT_MAX,bb=0; // ll - left, rr - right, tt - top, bb - bottom. these are extreme conditions.
		for(i=0;i<a;i++)
		{
			for(j=0;j<b;j++)
			{
				cin >> d;
				if(d=='*')
				{
					if(ll>i)
						ll=i;
					if(rr<i)
						rr=i;
					if(tt>j)
						tt=j;
					if(bb<j)
						bb=j;
				}

			}
		}
		if(abs(rr-ll)>abs(tt-bb) && abs(rr-ll)!=INT_MAX)
			cout << int((abs(rr-ll)+3)/2) << endl;
		else if(abs(tt-bb)!=INT_MAX)
			cout << int((abs(tt-bb)+3)/2) << endl;
		else
			cout << 0 << endl;
	}
}