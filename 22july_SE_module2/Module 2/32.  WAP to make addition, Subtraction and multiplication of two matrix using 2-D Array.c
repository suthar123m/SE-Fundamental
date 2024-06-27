#include<stdio.h>
main()
{
	int a[2][3]={9,8,7,9,8,7};
	int b[2][3]={2,4,5,6,4,3};
	int c[2][3];
	int row,col;
	
	printf("----- first matrix ----- \n");
	for(row=0;row<2;row++)
	{
		for(col=0;col<3;col++)
		{
			printf(" %d ",a[row][col]);
		}
		printf("\n");
	}
	printf("----- second matrix ----- \n");
	for(row=0;row<2;row++)
	{
		for(col=0;col<3;col++)
		{
			printf(" %d ",b[row][col]);
		}
		printf("\n");
	}
	
	printf("\n----- adition matrix -----\n");
	for(row=0;row<2;row++)
	{
		for(col=0;col<3;col++)
		{
			c[row][col]=a[row][col] + b[row][col];
			printf(" %d ",c[row][col]);
		}
		printf("\n");
	}
	printf("----- substraction matrix -----\n");
	for(row=0;row<2;row++)
	{
		for(col=0;col<3;col++)
		{
			c[row][col]=a[row][col] - b[row][col];
			printf(" %d ",c[row][col]);
		}
		printf("\n");
	}
	printf("----- multiplication matrix -----\n");
	for(row=0;row<2;row++)
	{
		for(col=0;col<3;col++)
		{
			c[row][col]=a[row][col] * b[row][col];
			printf(" %d ",c[row][col]);
		}
		printf("\n");
	}
}
