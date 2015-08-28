#include <iostream>

using namespace std;

int main(){
	int a,b;
	long long c[100000];
	cin >> a;
	for(int i=0;i<a;i++){
		cin >> b;
		int sum=0,k=b-1;
		for (int j=0;j<b;j++){
			cin >> c[j];
			sum+=(j-k)*c[j];
			k--;
		}
		cout << sum << endl;
	}
}