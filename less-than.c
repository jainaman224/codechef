#include <stdio.h>

int main(){
	int a;
	scanf("%d",&a);
	int b[a],c[a],i;
	for(i=0;i<a;i++){
		scanf("%d%d",&b[i],&c[i]);
	}
	for(i=0;i<a;i++){
		if(b[i]<c[i])
			printf("<\n");
		else if(b[i]>c[i])
			printf(">\n");
		else
			printf("=\n");
	}
}