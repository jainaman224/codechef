#include <iostream>
#include <string>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        int tem=0,i,max=0;

       	for(i=0;i<s.length();i++,max=max>tem?max:tem){
	       if(s[i]=='(')
	       tem++;
	       else
	       tem--;
       	}

       	for(i=0;i<max;i++)
        cout << "(";

        for(i=0;i<max;i++)
        cout << ")";

        cout << endl;
    }
}