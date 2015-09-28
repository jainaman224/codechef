#include <stdio.h>

int main(){
	int a;
	scanf("%d",&a);
	while(a--){
		double b,c;
		scanf("%lf%lf",&b,&c);
		if(b>1000)
			printf("%.6lf\n",(0.9*b*c));
		else
			printf("%.6lf\n",b*c);
	}
}