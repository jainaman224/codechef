#include <iostream>

using namespace std;

int main(){
	int n;
	cin >> n;
	for (int i=0;i<n;i++){
		char array[400];
		cin >> array;
		int j=0;
		while (array[j]!='\0'){
			if (array[j]=='+' || array[j]=='-'){
				char temp;
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
				j++;
			}
			j++;
		}
		cout << array << endl;
	}
}