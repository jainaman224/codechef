#include <iostream>

using namespace std;

int main(){
	int a;
	cin >> a;
	while(a--){
		int b,c,i,d,e,j,sum2=0;
		cin >> b >> c >> d >> e;
		int f[b],sum=0,sum1=0;
		for(i=0;i<b;i++){
			cin >> f[i];
			sum+=f[i];
		}
		for(i=1;i<=d;i++){
			sum1+=f[i];
			j=0;
		}
		sum2=sum1;
		for(i=1;i<b-d;i++){
			sum2+=f[i+d]-f[i];
			if(sum1*e-f[j]<sum2*e-f[i]){
				sum1=sum2;
				j=i;
			}
		}
		if(sum<sum+sum1*(e-1)-f[j])
			cout << sum+sum1*(e-1)-f[j] << endl;
		else
			cout << sum << endl;
	}
}