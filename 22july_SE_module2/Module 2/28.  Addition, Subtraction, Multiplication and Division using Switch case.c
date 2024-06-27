#include<stdio.h>
main()
{
	int n1,n2,add,sub,multi,div;
	int choose;
	
	printf("Enter the value of n1 : ");
	scanf("%d",&n1);
	
	printf("Enter the value of n2 : ");
	scanf("%d",&n2);
	
	printf("\n1.. Adition\n2.. Substraction\n3.. Multiplication\n4.. Division\n");
	printf("Choose option ");
	scanf("%d",&choose);
	switch(choose)
	{
		case 1:
			add=n1+n2;
			printf("Add of n1 and n2 %d + %d = %d: ",n1,n2,add);
			break;
		
		case 2:
			sub=n1-n2;
			printf("Sub of n1 and n2 %d - %d = %d:",n1,n2,sub);
			break;
		
		case 3:
			multi=n1*n2;
			printf("Multi of n1 and n2 %d * %d = %d",n1,n2,multi);
			break;
		
		case 4:
			div=n1/n2;
			printf("Div of n1 and n2 %d / %d = %d",n1,n2,div);
			break;		
		
		default:
			printf("Invalid data ");		
	}
	
	
}
