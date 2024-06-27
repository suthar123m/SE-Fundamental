#include<stdio.h>
main()
{
	int i,num,fectorial=1;
	printf("Enter the value of number : ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		printf("%d\n",i);
		fectorial=fectorial*i;
	}
	printf("Fectorial = %d",fectorial);
}
