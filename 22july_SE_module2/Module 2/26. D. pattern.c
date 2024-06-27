#include<stdio.h>
main()
{
	int row,col;
	char alpha=65;
	for(row=1;row<=5;row++)
	{
		for(col=1;col<=row;col++)
		{
			printf("%c ",alpha);
			alpha++;
		}
		printf("\n");
	}
}
