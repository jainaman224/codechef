#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <cstdio>
#define gc getchar_unlocked

using namespace std;

int compare (const void * a, const void * b)
{
  	return ( *(long*)a - *(long*)b );
}

void scanint(long &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}

int main(){
	int a;
	cin >> a;
	while(a--){
		long b;
		int c,i;
		cin >> b >> c;
		long d[c],count=0;
		for(i=0;i<c;i++){
			scanint(d[i]);
		}
		qsort(d,c,sizeof(long),compare);
		i=-1;
		c--;
		while(c>=0){
			i++;
			c-=(d[i]+1);
			count+=d[i];
		}
		cout << count+c+1 << endl;
	}
}