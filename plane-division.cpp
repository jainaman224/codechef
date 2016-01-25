#include <iostream>
#include <map>
#include <set>
#include <stdio.h>

using namespace std;

/*struct node{
	double slope;
	set <long> c;
	struct node *right,*left,*mid;
} *start=NULL;*/

void scanint(long &x){
    register int c=getchar_unlocked();
    x=0;
    for(;(c<48 || c>57);c=getchar_unlocked());
    for(;c>47 && c<58;c=getchar_unlocked()){
    	x=(x<<1)+(x<<3)+c-48;
    }
}

int main(){
	set <double> cc;
	set <double> :: iterator ip;
	map <double, set <double> > my;
	map <double, set <double> > :: iterator it;
	long t,n,a,b,c,i,sum=0,temp;
	double x,y;
	scanint(t);
	while(t--){
		scanint(n);
		while(n--){
			scanint(a);
			scanint(b);
			scanint(c);
			if(b==0){
				y=c;
				x=99999999;
			}
			else{
				y=((double)c)/b;
				x=((double)a)/b;
			}
			it=my.find(x);
			if(it==my.end()){
				cc.clear();
				cc.insert(y);
				temp=1;
				my.insert(pair <double, set <double> > (x,cc));
			}
			else{
				cc=it->second;
				cc.insert(y);
				temp=cc.size();
				my.erase(it);
				my.insert(pair <double, set <double> > (x,cc));
			}
			if(temp>sum)
				sum=temp;
		}
		cout << sum << endl;
	}
}