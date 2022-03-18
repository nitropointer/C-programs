/*
Name            : Harsh Shah
Date            : 07/02/2022
Description     : int getword(char *word)
				  Create a function named getword.
				  Function will receive the string from main
				  Function should return the length of the first word.

Input           : Enter the string : Welcome to Emertxe
Output          : You entered Welcome and the length is 7
*/

//start
#include <stdio.h>						//header files
int getword(char *str);					//function prototype
int main()								//main function
{
        int len = 0;					//defining len as an int 
	    char str[100];					//defining str as an char of 100 characters

		printf("Enter the string : ");		//reading string from user
		scanf(" %[^\n]", str);				//it is selective scanf which reads from begining to end of string

		len = getword(str);					//function call

        printf("You entered %s and the length is %d\n", str, len);		//prints the output
		return 0;
}

int getword(char *str)					//function definition
{
	int count=0,i=0;					//defining count and i as an int
	while(*str != '\0' && *str != ' ')		//setting while loop condition
	{
		count++;						//incrementing count
		*str++;
	}
	str[i] = '\0';
	return count;						//return value which is collected by len variable
}
//stop
