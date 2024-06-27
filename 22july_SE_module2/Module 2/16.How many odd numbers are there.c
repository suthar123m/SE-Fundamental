#include<stdio.h>
main()
{
	int i,oddcount=0;
	for(i=1;i<=101;i++)
	{
		if(i%2!=0)
		{
			oddcount++;
		}
	}
	printf("total oddcount =  %d",oddcount);
}
