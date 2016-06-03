// By Aman Jain(jainaman224)
// 5/2/16

#include <iostream>

using namespace std;

int main()
{
	int i,a,b,c[100001]={0};
	cin >> a;
	for(i = 0; i < a; i++)
	{
		cin >> b;
		c[b]++;
	}
	for(i = 1; i <= a; i++)
	{
		if(c[i] == 0)
			cout << i << " ";
	}
	return 0;
}