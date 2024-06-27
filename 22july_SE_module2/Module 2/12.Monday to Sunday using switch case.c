#include<stdio.h>
main()
{
	int days;
	printf("Enter the day : ");
	scanf("%d",&days);
	switch(days)
	{
		case 1:
			printf("Monday");
			break;
		case 2:
			printf("Tuesday");
			break;
		case 3:
			printf("Wednesday");
			break;
		case 4:
			printf("Thrusday");
			break;
		case 5:
			printf("Friday");
			break;
		case 6:
			printf("Saterday");
			break;
		case 7:
			printf("Sunday");
			break;
		default:
			printf("No days print");							
	}
}
