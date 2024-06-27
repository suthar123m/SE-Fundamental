#include<stdio.h>
main()
{
	int n,last,sum;
	printf("Enter the value = ");
	scanf("%d",&n);
	
	last=n%10;
	
	while(n>9)
	{
		n=n/10;
	}
	sum=n+last;
	printf("sum = %d",sum);
	
	return 0;
}
