// By Aman Jain(jainaman224)
// 7/5/16

#include <iostream>

using namespace std;

int main()
{
	int t;
	cout << "1\n3 1 1 2\n3 4 5 5\n";
	cin >> t;
	cout << "2\n";
	// Cases for finding heavy ball.
	if(t==0) cout << 3;
	if(t==1) cout << 2;
	if(t==2) cout << 1;
	if(t==-1) cout << 4;
	if(t==-2) cout << 5;
	// cout << ans << result << to avoid similarity;
	return 0;
}