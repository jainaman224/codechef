#include <iostream>

using namespace std;

int main(){
	int a,n,x,y;
	cin >> a;
	while (a--){
		cin >> n;
		int result=0;
		for (int i=1;i<=n;i++){
			cin >> x >> y;
			result=result^i;
		}
		cout << result << endl;
	}
}