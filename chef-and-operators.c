#include <stdio.h>

int main() 
{
	int testcase;
	long long num1,num2;
	scanf("%d",&testcase);
	while(testcase--)
	{
		scanf("%lli %lli",&num1,&num2);
		if (num1<num2)
	  		printf("<\n");
	   	else if(num2<num1)
	  		printf(">\n");
	 	else
	  		printf("=\n");
	} 
	return 0;
}