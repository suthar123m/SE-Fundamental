#include <stdio.h>
#include <string.h>
#include<iostream>
using namespace std;
main() 
{

    int choice;
	bool st=true;

    while (st) {
    	
	    printf("\n\nMain menu\n\n");
	    printf("\t1.. Reverse of string\n");
	    printf("\t2.. Concatenation\n");
	    printf("\t3.. Palindrome\n");
	    printf("\t4.. Copy of string\n");
	    printf("\t5.. Length of string\n");
	    printf("\t6.. Frequency of character in string\n");
	    printf("\t7.. Find number of vowels and consonants\n");
	    printf("\t8.. Find number of blank spaces and digits\n");
	    printf("\t9.. Exit\n");
        printf("\nPlease Enter your choice = ");
        scanf(" %d", &choice);

        if (choice == 1) 
		{
            char name[30] = "Tops Technology";
            printf("Reverse string is = %s", strrev(name));
        }
		else if (choice == 2) 
		 {
            char name1[30] = "Mahendra";
            char name2[30] = " Kumar";
            strcat(name1, name2);
            printf("Concatenation is = %s", name1);
        }
		else if (choice == 3) 
		{
            printf("polindrom is under process");
        }
        else if( choice == 4)
        {
        	char name3[30]="Tops Tecnology";
        	char name4[30];
        	strcpy(name4,name3);
        	printf("Copy string = %s",name4);
		}
		else if( choice == 5)
		{
			char name5[30]="Tops Tecnology";
			printf("Lenght = %d",strlen(name5));
		}
		else if( choice == 6)
		{
			char name[20]="tops tecnology";
			int sum=0,i,j;
			for(i=97;i<=122;i++)
			{
				sum=0;
				for(j=0;j<sizeof(name);j++)
				{
					if((int)name[j]==i)
					{
						sum=sum+1	;
					}
				}
				if(sum>0)
				{
					cout<<(char)i<<" come == "<<sum<<"  time  "<<endl;
				}
			}
		}
		else if( choice == 7)
		{
			char name[100]="tops tecnology";
		    int i, vowel = 0, consonant = 0;
			for (i = 0; i < strlen(name); i++)
			{
		        char ch = tolower(name[i]); 
		        if (ch >= 'a' && ch <= 'z') 
				{
		            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
		                vowel++;
		            } else {
		                consonant++;
		            }
		        }
		    }
		    printf("Total number of vowels: %d\n", vowel);
		    printf("Total number of consonants: %d\n", consonant);
		}
		else if( choice == 8) 
		{
			char name[100]="tops tecnology";
		    int blanks=0,digits=0;
			fgets(name, sizeof(name), stdin);
			for (int i = 0; i < strlen(name); i++)
			{
		        char ch = name[i];
		        if (isspace(ch)) 
				{
		            blanks++;
		        }
				else if(isdigit(ch)) 
				{
		            digits++;
		        }
		    }
			printf("Number of blank spaces: %d\n", blanks);
		    printf("Number of digits: %d\n", digits);
			break;
		}
		else if(choice == 9)
		{
			printf("Thank You");
			st=false;
		}
		else
		{
			printf("Invalid data");
		}
    }

    
}

