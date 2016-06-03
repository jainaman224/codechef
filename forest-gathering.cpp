// By Aman Jain(jainaman224)
// 7/5/16

#include <iostream>
#include <math.h>

using namespace std;


// Lets try binary search

/*int main(){
	long long a[100000][2],i,n;
	long long mid,low=0,up=4000000000000000000,wood,cut,add,temp;

	cin >> n >> wood >> cut;
	for(i=0;i<n;i++)
	{
		cin >> a[i][0] >> a[i][1];
	}

	while(up>=low){
		// cout << up << " " << low << endl;
		mid = (up+low)/2;
		add = 0;

		for(i=0;i<n;i++){
			if((a[i][0]+a[i][1]*mid)>=cut){
				add+=a[i][0]+a[i][1]*mid;
			}
		}

		if(add==wood){
			temp = mid;
			break;
		}
		else if(add>wood){
			temp = mid;
			up=mid-1;
		}
		else
			low = mid+1;
	}
	cout << temp;

	return 0;
}
*/

struct data
{
	long long time;
	long long initial;
	long long inc;
} d[100001],temp[100001];

void merge(long i,long j,long mid)
{
	long l=mid+1,k=i,i2=i;
	while(i<=mid && l<=j)
	{
		if(d[i].time<=d[l].time)
		{
			temp[k].time=d[i].time;
			temp[k].initial=d[i].initial;
			temp[k].inc=d[i].inc;
			i++;
		}
		else
		{
			temp[k].time=d[l].time;
			temp[k].initial=d[l].initial;
			temp[k].inc=d[l].inc;
			l++;
		}
		k++;
	}
	while(i<=mid)
	{
		temp[k].time=d[i].time;
		temp[k].initial=d[i].initial;
		temp[k].inc=d[i].inc;
		i++;
		k++;
	}
	while(l<=j)
	{
		temp[k].time=d[l].time;
		temp[k].initial=d[l].initial;
		temp[k].inc=d[l].inc;
		l++;
		k++;
	}
	for(;i2<k;i2++)
	{
		d[i2].time=temp[i2].time;
		d[i2].initial=temp[i2].initial;
		d[i2].inc=temp[i2].inc;
	}
}

void split(long i,long j)
{
	long mid = (i+j)/2;
	if(i<j)
	{
		split(i,mid);
		split(mid+1,j);
		merge(i,j,mid);
	}
}

int main()
{
	long a,i;
	int j = 0;
	long long b,c,wood=0,tt=0,incre=0,ss;
	cin >> a >> b >> c;
	for(i=0;i<a;i++)
	{
		cin >> d[i].initial >> d[i].inc;
		if(d[i].initial>=c)
			d[i].time=0;
		else{
			d[i].time = (c-d[i].initial)/d[i].inc;
			if((c-d[i].initial)%d[i].inc)
				d[i].time++;
		}
	}
	split(0,a-1);
	i=0;
	while(i<a)
	{
		if((b-wood)%incre)
			ss=1;
		if(incre!=0 && (tt+((b-wood)/incre)+ss)<=d[i].time)
		{
			cout << (tt+((b-wood)/incre)+ss);
			j = 1;
			break;
		}
		else
		{
			wood+=d[i].initial+d[i].inc*d[i].time+incre*(d[i].time-tt);
			incre+=d[i].inc;
			tt=d[i].time;
			if(wood>=b)
			{
				cout << tt;
				j=1;
				break;
			}
		}
		i++;
	}
	if(j==0){
		tt += (b-wood)/incre;
		if((b-wood)%incre)
			tt++;
		cout << tt;
	}
	return 0;
}

