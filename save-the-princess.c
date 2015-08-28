#include <stdio.h>

int main(){
	int a,i,b;
	scanf("%d",&a);
	for (i=0;i<a;i++){
		int l=0,m=1,sum=1,x=0,j;
		scanf("%d",&b);
		for (j=0;j<b;j++){
			sum+=l;
			l=m;
			m=sum;
		}
		while (sum!=0){
			if (sum%2==1)
				x++;
			sum/=2;
		}
		printf("%d \n",x);
	}
}