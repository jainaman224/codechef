#include<iostream>
 
using namespace std;
 int main()
{
    int q;
    long l,r;
    cin>>q;
    for(int i=0;i<q;i++){
        cin>>l>>r;
        int b=(l+2)%6;
        if (b==0)
            b=6;
        if(int((r-(l+6-b))/6)%2==0)
            cout << 3 << endl;
        else
            cout << 1 << endl;
    }
}