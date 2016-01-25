#include <iostream>

using namespace std;

int main(){
	long long a,b,c,d,e,f,g,h,i,j,l;
	cin >> a;
	while(a--){
		cin >> b >> c >> d >> e;
		while((b/10)!=0){
			j=0;
			while(b!=0){
				j+=b%10;
				b/=10;
			}
			b=j;
		}
		while((c/10)!=0){
			j=0;
			while(c!=0){
				j+=c%10;
				c/=10;
			}
			c=j;
		}
		f=(e-d+1)/9;
		g=(e-d+1)%9;
		l=0;
		for(i=1;i<10;i++){
			h=b+(i-1)*c;
			while((h/10)!=0){
				j=0;
				while(h!=0){
					j+=(h%10);
					h/=10;
				}
				h=j;
			}
			l+=h;
		}
		f*=l;
		for(i=(d%9)+9;i<((d%9)+g+9);i++){
			h=b+(i-1)*c;
			while((h/10)!=0){
				j=0;
				while(h!=0){
					j+=(h%10);
					h/=10;
				}
				h=j;
			}
			f+=h;
		}
		cout << f << endl;
	}
}