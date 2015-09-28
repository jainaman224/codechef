#include <iostream>
#include <set>

using namespace std;

int main(){
	int b,c,d,e,f,g,i;
	cin >> b >> c;
	set <int> aman[b];
	while(c--){
		cin >> d;
		if(d){
			cin >> e;
			cout << aman[e-1].size() << endl;
		}
		else{
			cin >> e >> f >> g;
			for(i=e-1;i<f;i++){
				aman[i].insert(g);
			}
		}
	}
}