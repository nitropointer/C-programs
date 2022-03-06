/*
Name			: Harsh Shah
Date			: 17/12/2021
Description		: The user entered number should identified whether its a odd or a even number. Mention its sign too.
Input			: Enter the value of 'n' : -2
Output			: -2 is negative even number
*/


#include<stdio.h>	//header file
int main() 			//returns some integer value at the end of execution

{
	int n;			//defining n as integer
	printf("Enter the value of 'n':");		//reading input from user
	scanf("%d", &n);

	if (n > 0)			//checking condition if it is true then entering in nested if block
	{
		if ( n % 2 == 0 )	//checking condition for positive even number if it is true then printing output 
		{
			printf("%d is positive even number\n", n );
		}
		else  				//if condition is false then printing else part
		{
			printf("%d is positive odd number\n", n );
		}
	}

	if (n < 0)					//checking condition if it is true then entering in nested if block
	{	
		if ( n % 2 == 0)   		//checking condition for negtive even number if it is true then printing output 
		{
			printf("%d is a negative even number\n", n);
		}
		else         			//if condition is false then printing else part
		{
			printf("%d is negative odd number\n", n);
		}
	}
	if (n == 0)					//if number is 0 than printing output
	{
		printf("%d is neither odd nor even\n", n);
	}
	return 0;				//return int value
}
