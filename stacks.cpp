#include <iostream>
#include <vector>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>
#define gc getchar_unlocked

using namespace std;

void scanint(long &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}

int main(){
	int a,b;
	long c;
	vector <long> d;
	cin >> a;
	while(a--){
		d.clear();
		cin >> b >> c;
		d.push_back(c);
		while(b>1){
			int k=d.size()-1;
			b--;
			scanint(c);
			int pos=upper_bound(d.begin(),d.end(),c)-d.begin();
			if(pos==d.size())
				d.push_back(c);
			else
				d[pos]=c;
		}
		cout << d.size() << " ";
		for(int i=0;i<d.size();i++){
			printf("%li ",d[i]);
		}
		cout << endl;
	}
}