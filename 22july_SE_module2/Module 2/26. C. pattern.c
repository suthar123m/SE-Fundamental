#include<stdio.h>
main()
{
	int row,col,count=1;
	for(row=1;row<=5;row++)
	{
		for(col=1;col<=row;col++)
		{
			printf("%d ",count);
			count++;
		}
		printf("\n");
	}
}
