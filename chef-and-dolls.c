#include <stdio.h>

int main(){
	long a,b,c,i;
	scanf("%li",&a);
	while(a--){
		i=0;
		scanf("%li",&b);
		while(b--){
			scanf("%li",&c);
			i^=c;
		}
		printf("%li\n",i);
	}
}