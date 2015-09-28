#include <iostream>
#include <math.h>

using namespace std;

int isprime(long b){
	if (b==2)
		return 1;
	else if (b==1 || b==0 || b%2==0)
		return 0;
	else
		for (int i=3;i<int(sqrt(b))+1;i+=2)
			if(b%i==0)
				return 0;
	return 1;
}

int main(){
	int a;
	cin >> a;
	while(a--){
		long b;
		cin >> b;
		if(isprime(b))
			cout << "yes" << endl;
		else
			cout << "no" << endl;
	}
}