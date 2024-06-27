#include<stdio.h>
main()
{
	int i,n,evensum=0;
	printf("Enter the value of number : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			printf("%d\n",i);
			evensum=evensum+i;
		}
	}
	printf("Evensum :- %d",evensum);
	
}
