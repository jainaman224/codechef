// Aman Jain (jainaman224)
// 1/4/16

#include <iostream>
#include <cstdio>

using namespace std;

void scanlonglong(long long &x)
{
	register int  c = getchar_unlocked();
	x = 0;
	for(; (c < 48 || c > 57); c = getchar_unlocked());
	for(; (c > 47 && c < 58); c = getchar_unlocked())
		x = (x << 1) + (x << 3) + c - 48;
}

int main(){
	int n;
	long long a,b;
	cin >> n;
	while(n--){
		scanlonglong(a);
		scanlonglong(b);
		if(a==1 || b==1){
			if(a==2 || b==2)
				cout << "Yes" << endl;
			else
				cout << "No" << endl;
		}
		else if((a%2==0) || (b%2==0))
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
}
