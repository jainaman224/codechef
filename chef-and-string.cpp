#include <iostream>
#include <string.h>

using namespace std;
 
int main(){
    char str[100000];
    int i,a,b,c,d;
    i=a=b=c=d=0;
    cin >> str;
    while(i<strlen(str)){
        if(str[i]=='C')
            a++;
        else if(str[i]=='H'){
    		if(a>b)
                b++;
        }
        else if(str[i]=='E'){
    		if(b>c)
                c++;
        }
        else if(str[i]=='F'){
            if(c>d)
                d++;
        }
        i++;
    }
    cout << d << endl;
    return 0;
} 