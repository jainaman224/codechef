// By Aman Jain(jainaman224)
// 24/1/16

#include <iostream>
#include <cstdlib>
#include <cstdio>

using namespace std;

void scanlong(long &x){
    register long c=getchar_unlocked();
    x=0;
    for(;(c<48 || c>57);c=getchar_unlocked());
    for(;c>47 && c<58;c=getchar_unlocked()){
        x=(x<<1)+(x<<3)+c-48;
    }
}

int compare(const void *a, const void *b){
  if(*(long*)a < *(long*)b) return -1;
  if(*(long*)a == *(long*)b) return 0;
  return 1;
}

int main(){
	unsigned int i,t,n,temp,max;
	long a[50000];
	cin >> t;
	while(t--){
		cin >> n;
		for(i=0;i<n;i++){
			scanlong(a[i]);
		}
		qsort (a, n, sizeof(long), compare);
		temp=max=1;
		for(i=1;i<n;i++){
			if(a[i]==a[i-1])
				temp++;
			else{
				if(temp>max)
					max=temp;
				temp=1;
			}
		}
		if(temp>max)
			max=temp;
		if(max>(n+1)/2)
			cout << max << endl;
		else
			cout << (n+1)/2 << endl;
	}
}