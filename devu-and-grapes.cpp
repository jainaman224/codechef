#include <iostream>

using namespace std;

int main(){
	int a;
	long long b,c,d,sum;
	cin >> a;
	while(a--){
		sum=0;
		cin >> b >> c;
		while(b--){
			cin >> d;
			if (d < c){
				sum+=c-d;
			}
			else if((d%c) > (c/2)){
				sum+=c-d%c;
			}
			else{
				sum+=d%c;
			}
		}
		cout << sum << endl;
	}
}