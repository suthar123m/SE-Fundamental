#include<stdio.h>
main()
{
	int row,col,n;
	printf("Enter the number : ");
	scanf("%d",&n);
	for(row=1;row<=n;row++)
	{
		for(col=1;col<=row;col++)
		{
			if(col%2==0)
			{
				printf(" 0 ");
			}
			else
			{
				printf("1");
			}
		}
		printf("\n");
	}
}
