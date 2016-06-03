#include <iostream>

using namespace std;

int main()
{
    unsigned long i,index;
    long test,difference,character[26];
    long lowest,ans,total,temp;
    string a;
    cin >> test;
    // cout << endl;
    while(test--)
    {
        for(i=0;i<26;i++)
        {
            character[i]=0;
        }
        cin >> a >> difference;
        // cout << a << " " << difference << " " << a.length();
        for(i=0;i<a.length();i++)
        {
            // cout << int(a[i])-97 <<" ";
            character[(int(a[i])-97)]++;
        }
        // cout << "Hi" << endl;
        lowest = 200000;
        ans = 100000;
        total = 0;
        index = 0;
        while(lowest!=100000)
        {
            lowest = 100000;
            temp = 0;
            for(i=0;i<26;i++)
            {
                if(character[i]!=0 && character[i]<lowest)
                {
                    lowest = character[i];
                    index = i;
                }
            }
            for(i=0;i<26;i++)
            {
                if(character[i]!=0 && character[i]-lowest>difference)
                {
                    temp+=character[i]-lowest-difference;
                }
            }
            // cout << temp << " " << total << " " << ans << endl;
            if((temp+total)<ans)
                ans = temp+total;
            total += lowest;
            character[index]=0;
        }
        cout << ans << endl;
    }
    return 0;
}
