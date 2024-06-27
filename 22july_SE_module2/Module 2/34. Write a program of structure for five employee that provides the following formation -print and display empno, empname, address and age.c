#include<stdio.h>
struct employee
{
	int empno;
	char empname[30];
	char add[20];
	int age;
	
};
main()
{
	struct employee emp;
	
	printf("Enter the employee's emp no. == ");
	scanf("%d",&emp.empno);
	
	printf("\nEnter employee's emp name == ");
	scanf("%s",&emp.empname);
	
	printf("\nEnter the employee's add == ");
	scanf("%s",&emp.add);
	
	printf("\nEnter the employee's age == ");
	scanf("%d",&emp.age);
	
	
	printf("\nemployee emp no.= %d",emp.empno);
	printf("\nemployee emp name = %s",emp.empname);
	printf("\nemployee add = %s",emp.add);
	printf("\nemployee age = %d",emp.age);
}
