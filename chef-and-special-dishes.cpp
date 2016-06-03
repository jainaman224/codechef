// By Aman Jain(jainaman224)
// 7/3/16

#include <iostream>
#include <string>

using namespace std;

int main()
{
	long t, flag, i, j, temp;
	string a;
	cin >> t;
	while(t--)
	{
		flag = 0;
		cin >> a;
		if(a.size() % 2)
		{
			temp = a.size()/2;
			j = 0;
			for(i = 0; i < temp; i++)
			{
				if(a[i] != a[temp + j + i] && j < 2)
				{
					j++;
					i--;
				}
				if(j > 1)
					break;
			}
			if(j > 1)
			{
				j = 0;
				for(i = 0; i < temp; i++)
				{
					if(a[i + j] != a[temp + 1 + i] && j < 2)
					{
						j++;
						i--;
					}
					if(j > 1)
					{
						flag = 1;
						break;
					}
				}
			}
		}
		else
		{
			temp = a.size()/2;
			for(i = 0; i < temp; i++)
			{
				if(a[i] != a[temp + i])
				{
					flag = 1;
					break;
				}
			}
		}
		if(flag)
			cout << "NO" << endl;
		else
			cout << "YES" << endl;
	}
}
