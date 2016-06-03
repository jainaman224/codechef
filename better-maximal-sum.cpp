#include <iostream>

using namespace std;

int main()
{
    long long test,i,n;
    long long a[100000],min;
    long long sum,max,c[100000];
    cin >> test;
    while(test--)
    {
        max = sum = 0;
        min = -1000000001;
        cin >> n;
        for(i=0;i<n;i++)
        {
            cin >> a[i];
            if(a[i]>min)
            {
                min = a[i];
            }
            if(a[i]>=0)
            {
                sum+=a[i];
            }
            else
            {
                c[i]=sum;
                if(max<sum)
                    max = sum;
                if(sum+a[i]<0)
                {
                    sum = 0;
                }
                else
                {
                    sum+=a[i];
                }
            }
        }
        if(max<sum)
            max = sum;
        sum = 0;
        for(i=n-1;i>=0;i--)
        {
            // cout << i << " ";
            if(a[i]>=0){
                sum+=a[i];
            }
            else
            {
                if(max<c[i]+sum)
                    max = c[i]+sum;
                if(sum+a[i]<0)
                {
                    sum = 0;
                }
                else
                {
                    sum+=a[i];
                }
            }
        }
        if(max<sum)
            max = sum;
        if(min<=0)
        {
            cout << min << endl;
        }
        else
        {
            cout << max << endl;
        }
    }
    return 0;
}
