// By Aman Jain(jainaman224)
// 11/5/16

#include <iostream>
#define x 1000000007

using namespace std;

int array[1000],t,a,b,c;
int array1[1001][1001];

int numarray(int j, int s)
{
	// cout << j << " " << s << "  ";
	if(j==-1){
		if(s==c)
			return 1;
		else
			return 0;
		// cout << endl;
	}
	else{
		int k = 0;
		if(array1[j][s]==-1){
			if(s-array[j]>0){
				k+=numarray(j-1,s-array[j]);
			}
			if(s+array[j]<=a){
				k+=numarray(j-1,s+array[j]);
			}
			array1[j][s]=k%x;
		}
		else
			k = array1[j][s];
		return k%x;
	}
}

int main(){
	int i,j;
	cin >> t;
	while(t--){
		cin >> a >> b >> c;
		for(i=0;i<=a;i++){
			for(j=0;j<=b;j++){
				array1[j][i]=-1;
			}
		}
		for(i=0;i<b;i++){
			cin >> array[i];
		}
		for(i=1;i<=a;i++){
			cout << numarray(b-1, i) << " ";
		}
		/*for(i=1;i<=a;i++){
			cout << array1[i] << " ";
			array1[i]=0;
		}*/
		cout << endl;
	}
	return 0;
}