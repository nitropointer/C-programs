/*
Name            : Harsh Shah
Date            : 3/2/2022
Description     : int my_atoi(const char *s)
				  The function will recieve a string and covert the number stored in the string into exact integer number.
				  Return the number.
Input           : Enter a numeric string: -12345
Output          : String to integer is -12345
*/

//start
#include<stdio.h>								//header files
#include<stdlib.h>								//standard library file
#include<string.h>								//string file
#include<ctype.h>								//ctype header file
int my_atoi(const char *str);					//function prototype

int main()										//main function
{
    char str[20];								//defining char array of strings
    
    printf("Enter a numeric string : ");		//reading strings from user
    scanf("%s", str);
    
    printf("String to integer is %d\n", my_atoi(str));		//printing output
	return 0;
}

int my_atoi(const char *str)					//function definition
{
	int number = 0, flag = 1;					//initialiazing number and flag variable
	while(*str)								//using loop to convert to integer
	{
		if (*str == '-')					//set condition to print -ve sign
		{
			flag = -1;						//initializing flag as -1
			str++;
		}
		if(*str == '+')
		{
			flag = 1;
			str++;
		}
		if(isdigit(*str) )					//set condition to convert to integer
		{
			number = (number*10)+(*str - 48);			//storing intger in number variable
			str++;
		}
		else
		{
			break;							//if condition doesnot satisfies then coming out of loop
		}
	}
	return flag*number;							//returns output to int function
}
//stop
