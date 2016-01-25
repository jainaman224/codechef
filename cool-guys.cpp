#include <cstdio>
#include <cstdlib>
#include <cmath>
 
#define gc getchar_unlocked
 
void scanint(int &x);
long long process(int);
long long greatestCDivisor(long long,long long);
 
int main()
{	
    int noOfTest=0,rangeLen;
    scanint(noOfTest);
    long long count,divisor=0;
    for(int i=0;i<noOfTest;++i)
    {
        scanint(rangeLen);
        count=process(rangeLen);
       	long long temp=(long long)rangeLen*rangeLen;
        divisor=greatestCDivisor(count,temp);
        printf("%lld/%lld\n",count/divisor,temp/divisor);
    }
    return 0;
}
 
long long int greatestCDivisor(long long int first,long long int second)
{
    if(second==0)
    	return first;
    else
    	return greatestCDivisor(second,first%second);
}
 
 
long long process(int i){
    long long count=0;
    int sqrtVal=(int)floor(sqrt(i));
    for(int start=1;start<=sqrtVal;++start){
        count+=i/start;
    }
    count=2*count-(sqrtVal*sqrtVal);
    return count;
}
 
void scanint(int &n){
	n=0;
        int ch=gc();
        int sign=1;
        while(ch<'0' || ch>'9'){
        	if(ch=='-')
        		sign=-1;
        	ch=gc();
        }
 
        while(ch>='0' && ch<='9')
            n=(n<<3)+(n<<1)+ch-'0',ch=gc();
        n=n*sign;
}