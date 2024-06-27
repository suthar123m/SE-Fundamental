#include<stdio.h>
main()
{
	int n1,n2;
	printf("Enter value of n1 : ");
	scanf("%d",&n1);
	for(n2=1;n2<=10;n2++)
	{
		printf("\n%d * %d = %d",n1,n2,(n1*n2));
	}
}
