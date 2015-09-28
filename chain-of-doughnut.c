#include <stdio.h>
#include <stdlib.h>

int compare (const void * a, const void * b);

int main(){
	int a,c,i;
	long d[20000],b;
	scanf("%d",&a);
	while(a--){
		scanf("%li%d",&b,&c);
		for(i=0;i<c;i++){
			scanf("%li",&d[i]);
		}
		qsort(d,c,sizeof(long),compare);
		b=0;
		for(i=0;c>=1;i++){
			c-=(d[i]+1);
			b+=d[i];
		}
		printf("%li\n",b+c);
	}
}

int compare (const void * a, const void * b)
{
  	return ( *(long*)a - *(long*)b );
}