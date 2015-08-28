#include <iostream>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--){
        string s1, s2;
        cin >> s1 >> s2;
        int both = 0,eq = 0,one = 0;
        for(int i=0; i<s1.length(); i++){
            if(s1[i] == s2[i] && s1[i] == '?')
            	both += 1;
            else if(s1[i] == s2[i])
            	eq += 1;
            else if(s1[i] != s2[i] && (s1[i] == '?' || s2[i] == '?'))
            	one += 1;
        }
 
        cout << s1.length() - both - eq - one << " " << s2.length() - eq << endl;
    }
}