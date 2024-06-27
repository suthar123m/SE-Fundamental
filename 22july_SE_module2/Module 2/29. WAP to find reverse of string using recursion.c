#include<stdio.h>
#include<string.h>

char reverse_string();

main()
{
	reverse_string();
	return 0;
}
char reverse_string()
{
	char name[20];
	printf("Enter your name : ");
	gets(name);
	
	int len;
	len = strlen(name);
	
	int i,temp;
	for(i=0;i<(len-1)/2;i++)
	{
		temp = name[i];
		name[i]=name[len-i-1];
		name[len-i-1] = temp;
	}
	printf("\nReverse string is = %s",name);
}
