#include <iostream>
#include <stdlib.h>

using namespace std;


int cmpfunc(const void *a,const void *b){
   return( *(int*)a- *(int*)b );
}

int main(){
	int a,b,i;
	cin >> a;
	while(a--){
		cin >> b;
		int c[b],d[b],j=0;
		for(i=0;i<b;i++){
			cin >> c[i];
		}
		for(i=0;i<b;i++){
			cin >> d[i];
		}
		qsort(c,b,sizeof(int),cmpfunc);
		qsort(d,b,sizeof(int),cmpfunc);
		for(i=0;i<b;i++){
			if(c[j]<=d[i])
				j++;
		}
		cout << j << endl;
	}
}