#include <iostream>
#include <stdlib.h>
#include <set>

using namespace std;

int compare(const void *a,const void *b){
	return (*(int *)a-*(int *)b);
}

int main(){
	int a,y,b,c,x,i,e,temp;
	set <int> d;
	set <int> :: iterator it;
	cin >> a;
	while(a--){
		y=0;
		d.clear();
		cin >> b >> c;
		for(i=0;i<b;i++){
			cin >> e;
			d.insert(e);
		}
		while(!d.empty()){
			x=*(d.begin());
			d.erase(x);
			y++;
			for(it=d.begin();it!=d.end();++it){
				if(*it>=x+c){
					x=*it;
					d.erase(x);
				}				
			}
		}
		cout << y << endl;			
	}
}		
