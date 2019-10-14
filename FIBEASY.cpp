#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ll t;
    cin>>t;

    ll fib[60];
    fib[0]=0;
    fib[1]=1;
    for(ll i=2;i<60;i++){
        fib[i] = (fib[i-1] + fib[i-2])%10;
    }
    while(t--)
    {
        ll n;
        cin>>n;
        ll i = log2(n);
        ll temp=pow(2,i);
        if(temp>n)
            i--;
        n=pow(2,i);
        cout<<fib[(n-1)%60]<<endl;
    }
}