// By Aman Jain(jainaman224)
// 4/2/16

#include <iostream>

using namespace std;

long binarySearch(double arr[], long l, long r, double x)
{
   	if (r >= l)
   	{
        long mid = l + (r - l)/2;
        if (arr[mid] == x)
        	return mid;
        if (arr[mid] > x)
        	return binarySearch(arr, l, mid-1, x);
        return binarySearch(arr, mid+1, r, x);
   	}
   	return r;
}

int main()
{
	int t;
	long n,q,i,j;
	double temp,a[1000000];
	cin >> t;
	while(t--)
	{
		cin >> n >> q >> a[0];
		for(i = 1;i < n;i++)
		{
			cin >> temp;
			j = i-1;
			while(a[j] > temp && j >= 0)
			{
				a[j+1] = a[j];
				j--;
			}
			a[j+1] = temp;
		}
		for(j = 0;j < q;j++)
		{
			cin >> temp;
			i = binarySearch(a, 0, n-1, temp);
			if(temp > a[i])
				i--;
			cout << n-i-1 << endl;
		}
	}
}