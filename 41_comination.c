/*
Name            : Harsh Shah
Date            : 15/2/2022
Description     : Read a string from the user, find and print all the possible combinations of given string.
Input           : Enter a string: abc
Output          : All possible combinations of given string :abc
				  acb
				  bca
				  bac
				  cab
				  cba
*/

//start
#include<stdio.h> 									//header files
#include<string.h>									//string header
#include<stdlib.h>
int my_strlen(char*ptr);							//function prototype
void combination(char *str,int i ,int len );		//function prototype
int main()											//main function
{
        char str[100];								//initialize str as an char 
        int n,i,j;									//initialize n,i and res as an int
        int res;
        printf("Enter a string:");					//reading string from user
        scanf("%99[^\n]",str);    
		for(i=0;str[i]!='\0';i++)					//using loop to check for distinct characters
		{
			for(j=i+1; str[j] != '\0'; j++)
			{
				if(str[i] == str[j])				//if condition satisfies then terminating program with error message
				{
					printf("Error: please enter distinct characters.\n");
					exit(1);
				}
			}
		}
		printf("All possible combination of given string:");			//printing output
        n = my_strlen(str);							//function call
        combination(str,0,n-1);                     //function call
        return 0;
}
int my_strlen(char *ptr)							//function definition
{
	int len = 0;									//initializing len as an 0
	while(*ptr++ )									//using loop to find length of string
	{
		len++;										//incrementing length
	}
	return len;										//returning length
}
void combination(char *str,int i ,int len )			//function definition
{
	char ch;									//defining ch as an char
	int j,k;									//initializing j as an int		
	if(i==len)									//base condition for recursion function
	{
		printf("%s", str);					//printing output
		printf("\n");
	}
	else
	{
		for(j=i;j<=len;j++)						//using loop to find different combination
		{
				ch = str[i];
				str[i] = str[j];
				str[j] = ch;
				combination(str, i+1, len);				//recursive function call
				ch = str[i];
				str[i] = str[j];
				str[j] = ch;
		}
	}
}
//stop
/*int my_strlen(char *ptr)
{
	int len = 0;
	while(*ptr++ )
	{
		len++;
	}
	return len;
}*/
/*void combination(char *str,int i ,int len )
{
	char ch;
	int fact=1,j,k,num = 0;
	//num = len+1;
	//len = len+1;
	//for(j=0;j<num;j++)
	//{
	//	fact = fact * len;
	//	len--;
//	}
	//printf("%d\n", fact);
	if(i==len)
	{
		
		printf("%s\n", str);
	}
	else
	{
		for(j=i;j<=len;j++)
		{
			{
				ch = str[i];
				str[i] = str[j];
				str[j] = ch;
				combination(str, i+1, len);
				ch = str[i];
				str[i] = str[j];
				str[j] = ch;
			}

		}
	}
	
}*/
