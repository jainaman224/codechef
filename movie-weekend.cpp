// By Aman Jain(jainaman224)
// 17/4/16

#include <iostream>

using namespace std;

int main(){
	int test,i,n,a[100],max,index,b,temp;
	cin >> test;
	while(test--){
		cin >> n;
		for(i=0;i<n;i++){
			cin >> a[i];
		}
		max=temp=0;
		for(i=0;i<n;i++){
			cin >> b;
			if(a[i]*b>max){
				max = a[i]*b;
				temp = i;
			}
			else if(a[i]*b==max){
				if(a[i]<a[temp]){
					max = a[i]*b;
					temp = i;
				}
			}
		}
		cout << temp+1 << endl;
	}
	return 0;
}