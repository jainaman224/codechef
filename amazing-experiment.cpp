// By Aman Jain(jainaman224)
// 4/4/16

#include <iostream>

using namespace std;

int main(){
	int i,j,t,n,u,v,w,ans;
	long a[2000][2000];
	cin >> t;
	while(t--){
		cin >> n;
		for(i=0;i<n;i++){
			for(j=0;j<n;j++){
				a[i][j]=-1;
			}
		}
		ans=0;
		for(i=1;i<n;i++){
			cin >> u >> v >> w;
			a[u-1][v-1]=w;
			a[v-1][u-1]=0;
			//if(w>ans)
			//	ans=w;
		}	
	}
	return 0;
}
