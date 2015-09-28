#include <iostream>

using namespace std;

int main(){
	int a,c,b;
	cin >> a >> b;
	c=a-b;
	if(c%10==9)
		c--;
	else
		c++;
	cout << c << endl;
}