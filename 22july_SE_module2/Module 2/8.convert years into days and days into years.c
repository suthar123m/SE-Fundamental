#include<stdio.h>
main()
{
	float years,days;
	printf("Enter the years : ");
	scanf("%f",&years);
	days=years*365.25;
	printf("days = %f\n",days);
	
	printf("Enter the days : ");
	scanf("%f",&days);
	years=days/365.25;
	printf("years = %f",years);
}
