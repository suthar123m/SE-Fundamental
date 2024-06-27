#include<stdio.h>
main()
{
	int row,col;
	char a='a';
	for(row='A';row<='E';row++)
	{
		for(col='A';col<=row;col++)
		{
			printf("%c ",col);
		}
		printf("\n");
	}
}
