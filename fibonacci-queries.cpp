// By Aman Jain (jainaman224)
// 2/4/16

#include <iostream>
#include <cstdio>
#define x 1000000007;

using namespace std;

long long int c,d;

void fast_fib(long long n, long long ans[])
{
    if(n == 1)
    {
        ans[0] = 1;
        ans[1] = 1;
        return;
    }
    fast_fib((n / 2), ans);
    c = 2 * ans[1] - ans[0];
    if(c < 0)
        c += x;
    c = (ans[0] * c) % x;      
    d = (ans[0] * ans[0] + ans[1] * ans[1]) % x;  
    if(n & 1)
    {
        ans[0] = d;
        ans[1] = c + d;
    }
    else
    {
        ans[0] = c;
        ans[1] = d;
    }
}

void scanlong(long long &m){
    register int c = getchar_unlocked();
    m=0;
    for(; (c < 48 || c > 57); c = getchar_unlocked());
    for(; (c > 47 && c < 58); c = getchar_unlocked())
        m = (m << 1) + (m << 3) + c - 48;
}

void scanint(int &m){
    register int c = getchar_unlocked();
    m=0;
    for(; (c < 48 || c > 57); c = getchar_unlocked());
    for(; (c > 47 && c < 58); c = getchar_unlocked())
        m = (m << 1) + (m << 3) + c - 48;
}

int main()
{
    char q;
    long long arr[100000],ans[2],result,p;
    int i, n, m,z,y;
    scanint(n);
    scanint(m);
    for(i=0;i<n;i++)
        scanlong(arr[i]);
    while(m--){
        cin >> q;
        scanint(z);
        scanint(y);
        if(q == 'C'){
            arr[z]=y;
        }
        else{
            result = 0;
            p = arr[z-1];
            fast_fib(p,ans);
            result += ans[0];
            p = arr[y-1];
            fast_fib(p,ans);
            result += ans[0];
            cout << result % x << endl;
        }
    }
    return 0;
}