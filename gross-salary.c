#include <stdio.h>

int main(){
	int a;
	scanf("%d",&a);
	while(a--){
		long b;
		float d;
		scanf("%li",&b);
		if(b<1500)
			printf("%g\n",b+0.1*b+0.9*b);
		else{
			printf("%g\n",b+500+b*0.98);
		}
	}
}