/*
Name            : Harsh Shah
Date            : 28/1/2022
Description     : Read number n from user.
				  Validate the given number
				  Call main function from main for calculating factorial.
				  Prompt for continue option without using loop.
Input           : Enter the value of N : 7
Output          : Factorial of the given number is 5040
*/

//start
#include<stdio.h>					//header file
int main()							//main function definition
{
    static int num ;				//defining num as static int 
    static unsigned long long int fact = 1;			//defining fact as unsigned long long int as value of factorial will be more
	if(fact == 1)					//setting condition to read number from user when fact becomes 1
	{
		printf("Enter the number: ");
		scanf("%d", &num);
	}
	if(num<0)					//if user enters negative value then printing Invalid input
	{
		printf("Invalid Input\n");
	}
	else						//if condition fails then executing else part
	{
		fact = fact*num;
		num--;
		if(num<=1)
		{
			printf("Factorial of the given number is %lld\n", fact);		//prinitng factorial of given number
			return 1;			//return 1 when last stack frame gets executed
		}
		else
		{
			return main();				//calling main function
		}
	}
}
//stop
