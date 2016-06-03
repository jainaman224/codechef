// By Aman Jain(jainaman224)
// 5/3/16

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string a, b;
	int t, i, flag, arr1[26];
	cin >> t;
	while(t--)
	{
		flag = 0;
		for(i = 0; i < 26; i++)
		{
			arr1[i] = 0;
		}
		cin >> a >> b;
		// cout << a.size() << " " << b.size() << endl;
		for(i = 0; i < a.size(); i++)
		{
			arr1[int(a[i])-97]++;
		}
		for(i = 0; i < b.size(); i++)
		{
			if(arr1[int(b[i])-97]){
				flag = 1;
				break;
			}
		}
		if(flag)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	return 0;
}
