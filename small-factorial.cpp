#include<iostream>
 
using namespace std;
 
 
int main(){

	int n;
	cin >> n;

	while(n--){

		int factorial;
		cin >> factorial;
		int array[200];
		int i=199;

		while(i--){
			array[i]=-1;
		}

		array[0]=1;
		int temp;
		int j;

		if(factorial==1 || factorial==0){
			cout << "1" << endl;
			continue;
		}

		while(factorial > 1){

			temp=0;
			j=0;

			while(array[j]>=0){	   
				temp+=factorial*array[j];
				array[j]=temp%10;
				temp=temp/10;
				j++;
			}

			while(temp){
				array[j]=temp%10;
				temp/=10;
				j++;
			}

			factorial--;

		}

		j--;

		while(j>=0){

			cout << array[j--];

		}

		cout << endl;

	}
} 