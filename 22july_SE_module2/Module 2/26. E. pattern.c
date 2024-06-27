#include<stdio.h>
main()
{
	int row,j,k,n;
	printf("Enter number : ");
	scanf("%d",&n);
	for(row=1;row<=n;row++)
	{
		for(k=1;k<=(n-row);k++)
		{
			printf(" ");
		}
		for(j=1;j<=row;j++)
		{
			printf("+");
		}
		for(j=2;j<=row;j++)
		{
			printf("+");
		}
		printf("\n");
	}
}

