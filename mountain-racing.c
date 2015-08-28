#include <stdio.h>

int main(){
	int a,b,i,j,l,m,ans;
	scanf("%d",&a);
	for (i=0;i<a;i++){
		scanf("%d",&b);
		scanf("%d",&l);
		m=l;
		ans=1;
		for (j=0;j<b-1;j++){
			scanf("%d",&l);
			if (l<m){
				m=l;
				ans+=1;
			}
		}
		printf("%d \n", ans);
	}
}