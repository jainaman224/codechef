#include <iostream>

using namespace std;

int aman();
int b,f;
int main(){
	int a,d,c;
	cin >> a;
	int j[a];
	for (int i=0;i<a;i++){
		cin >> b >> c;
		j[i]=0;
		f=j[i];
		aman();
		j[i]=f;
		if (b<c){
			d=c/b;
		}
		else{
			d=b/c;
		}

		while (d!=1){
			d/=2;
			j[i]++;
		}
	}
	for (int k=0; k<a; k++){
		cout << j[k] << endl;
	}
}

int aman(){
	if (!((b%2)==0)){
		while ( ( (b%2)!=0 ) && (b!=1) ){
			b = (b-1) / 2;
			f++;
		}
		if (b!=1){
			aman();
		}
	}
	else{
		int v=b;
		int d=f;
		while ((v%2)==0){
			v/=2;
			f++;
		}
		if (v==1){
			f=d;
		}
		else{
			b=v;
			aman();
		}
	}
	return 1;
}