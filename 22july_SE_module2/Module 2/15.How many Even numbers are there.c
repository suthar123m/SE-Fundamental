#include<stdio.h>
main()
{
	int i,evencount=0;
	for(i=1;i<=100;i++)
	{
		if(i%2==0)
		{
			evencount++;
		}
	}
	printf("total evencount =  %d",evencount);
}
