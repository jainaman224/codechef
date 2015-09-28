#include <iostream>
#include <malloc.h>

using namespace std;

int main(){
	long a,i=0,j,c,ans=0,d,max=0,low=0,*b,*forward,*backward;
	cin >> a;
	b=(long *)calloc(a,sizeof(long));
	forward=(long *)calloc(a-1,sizeof(long));
	backward=(long *)calloc(a-1,sizeof(long));
	while(i<a){
		cin >> b[i];
		i++;
	}
	for(i=0;i<a-1;i++){
		c=0;
		d=0;
		for(j=i;j<a-1;j++){
			c^=b[j];
			if(max<c){
				max=c;
			}
		}
		for(j=0;j<=i;j++){
			d^=b[a-1-j];
			if(low<d){
				low=d;
			}
		}
		forward[i]=max;
		backward[i]=low;
	}
	for(i=0;i<a-1;i++){
		if(ans<(forward[i]+backward[i]))
			ans=forward[i]+backward[i];
	}
	cout << ans << endl;
}