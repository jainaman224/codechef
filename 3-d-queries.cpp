#include <iostream>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define gc getchar_unlocked

using namespace std;

void scanint(int &x)
{
    register int c = gc();
    x = 0;
    for(;(c<48 || c>57);c = gc());
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
}

int main(){
	long N,i=0,m=0;
	int Q;
	cin >> N >> Q;
	int x[N],y[N],z[N],j=0,k=0,A[Q],B[Q],C[Q],f=N*(N-1)/2,*a,*b,*c;
	long D[Q];
	float *den;
	long double ans=0;
	a=(int *)calloc(f,sizeof(int));
	b=(int *)calloc(f,sizeof(int));
	c=(int *)calloc(f,sizeof(int));
	den=(float *)calloc(f,sizeof(float));
	while(i<N){
		scanint(x[i]);
		scanint(y[i]);
		scanint(z[i]);
		i++;
	}
	while(j<Q){
		scanint(A[j]);
		scanint(B[j]);
		scanint(C[j]);
		cin >> D[j];
		j++;
	}
	for(i=0;i<N-1;i++){
		for(j=i+1;j<N;j++){
			a[m]=(x[i]-x[j]);
			b[m]=(y[i]-y[j]);  
			c[m]=(z[i]-z[j]);
			den[m]=sqrt(pow(x[i]-x[j],4)+pow(y[i]-y[j],4)+pow(z[i]-z[j],4));
			ans+=(abs(A[k]*a[m]+B[k]*b[m]+C[k]*c[m]+D[k])+abs(-(A[k]*a[m]+B[k]*b[m]+C[k]*c[m])+D[k]))/den[m];
			m++;
		}
	}
	printf("%.8Lf\n",ans/(N*(N-1)));
	k++;
	while(k<Q){
		ans=0;
		for(i=0;i<(N*(N-1)/2);i++){
			ans+=(abs(A[k]*a[i]+B[k]*b[i]+C[k]*c[i]+D[k])+abs(-(A[k]*a[i]+B[k]*b[i]+C[k]*c[i])+D[k]))/den[i];
		}
		printf("%.8Lf\n",ans/(N*(N-1)));
		k++;
	}
}