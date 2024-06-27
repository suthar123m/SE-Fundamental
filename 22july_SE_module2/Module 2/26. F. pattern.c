#include<stdio.h>
main()
{
	int row1,col1,row2,col2;
	for(row1=1;row1<=5;row1++)
	{
		for(col1=1;col1<=row1;col1++)
		{
			printf("* ");
	}
		printf("\n");
	}
	for(row2=1;row2<=5;row2++) 
	{
		for(col2=4;col2>=row2;col2--) 
		{
			printf("* ");
		}
		printf("\n");
	}

}
