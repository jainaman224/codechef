#include <stdio.h>

int main(){
	int a,b,j,i=0;
	long c[100000];
	scanf("%d",&a);
	for(i;i<a;i++){
		scanf("%d",&b);
		long long sum=0;
		for (j=0;j<b;j++){
			scanf("%li",&c[j]);
			sum+=(j-(b-1-j))*c[j];
		}
		printf("%lli \n",sum);
	}
}