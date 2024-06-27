#include<stdio.h>
main()
{
	int arr[4] = {9,2,6,77};
	
	int i,max=0;
	for(i=0;i<4;i++)
	{
		if(arr[i]>max)
		{
			max = arr[i];
		}
	}
	printf("Maximum value is %d",max);
}
