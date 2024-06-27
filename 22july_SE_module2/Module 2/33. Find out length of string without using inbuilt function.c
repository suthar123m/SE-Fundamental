#include<stdio.h>
#include<string.h>

main()
{
	char name[20];
	
	printf("Enter your name : ");
	gets(name);
	
	printf("Lentgh of name is %d",strlen(name));
}
