#include<stdio.h>
main()
{
	int year ;
	printf("enter leap year :");
	scanf("%d",&year);
	if (year % 4 == 0)
	{
		printf("This is leap year");
	}
	else 
	{
		printf("This is not leap year");
	}
}
