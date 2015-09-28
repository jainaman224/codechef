#include <iostream>
#include <string.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	for (int i=0;i<n;i++){
		char array[400],stack[400],expression[400];
		cin >> array;
		int j=0,k=0,l=0,len=strlen(array);
		while (len--){
			if (array[j]=='+' || array[j]=='-' || array[j]=='*' || array[j]=='/' || array[j]=='('){
				if(array[j]=='/' || array[j]=='*' || array[j]=='(' || ((array[j]=='+' || array[j]=='-') && stack[l-1]!='*' && stack[l-1]!='/')){
					stack[l]=array[j];
					l++;
				}	
				else{
					while(stack[l-1]=='*' || stack[l-1]=='/'){
						expression[k]=stack[l-1];
						k++;
						l--;
					}
					stack[l]=array[j];
					l++;
				}
			}
			else if(array[j]==')'){
				while(stack[l-1]!='('){
					expression[k]=stack[l-1];
					k++;
					l--;
				}
				l--;
			}
			else{
				expression[k]=array[j];
				k++;
			}
			j++;
		}
		while(l>0){
			expression[k]=stack[l-1];
			k++;
			l--;
		}
		for(int k=0;k<strlen(expression);k++)
			cout << expression[k];
		cout << endl;
	}
}