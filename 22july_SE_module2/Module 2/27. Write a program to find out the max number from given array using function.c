
#include<stdio.h>
main()
{
	int a[5];
	int size,i,max;
	printf("Enter size of array = ");
	scanf("%d",&size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=0;i<size;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
	}
	printf("Maximum value of array = %d",max);
}
