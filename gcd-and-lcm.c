#include <stdio.h>

/*int aman(low,high){
	int i=2,j=1;
	while(low>=i){
		if(low%i==0 && high%i==0){
			j*=i;
			low/=i;
			i--;
		}
		i++;
	}
	return j;
}*/

int main(){
	int a;
	scanf("%d",&a);
	while(a--){
		long b,c,m,n;
		scanf("%li%li",&b,&c);
	    m=b;
	    n=c;
	    while(n){
	        m=m%n;
	        m^=n^=m^=n;
	    }
		printf("%li %li\n",m,(b*c)/m);
	}
}