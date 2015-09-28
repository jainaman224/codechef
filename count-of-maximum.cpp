#include <iostream>
#include <stdlib.h>

using namespace std;

int compare(const void *a,const void *b){
	return (*(int *)a-*(int *)b);
}

int main(){
	int a;
	cin >> a;
	while(a--){
		int b,countmax=1,count=1;
		cin >> b;
		int c[b];
		for(int i=0;i<b;i++)
			cin >> c[i];
		qsort(c,b,sizeof(int),compare);
		int num=c[0],nummax=c[0];
		for(int i=1;i<b;i++){
	        if(c[i]==c[i-1])
	            count++;
	        else{
                if(countmax<count){
                    countmax=count;
                    nummax=num;
                }
                count=1;
                num=c[i];
	        }
    	}
    	if(countmax < count){
          	countmax=count;
          	nummax=num;
      	}
		cout << nummax << " " << countmax << endl;
	}
}