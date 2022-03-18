/*
Name            : Harsh Shah
Date            : 25/1/2022
Description     : .In mathematics, the Fibonacci numbers or Fibonacci sequence are the numbers in the following integer sequence  0, 1, 				  -1, 2, -3, 5, -8, 13, -21, 34, -55, 89, -144 . . .
				  By definition, the first two numbers in the Fibonacci sequence are 0 and 1, each subsequent number is the subtraction 				  of the previous two
Input           : Enter a number: -8
Output          : 0, 1, -1, 2, -3, 5, -8
*/

//start
#include<stdio.h>								//header files
void negative_fibonacci(int limit, int previous, int current, int next);		//function prototype
int main()						//main function
{
	int limit,next;				//defining limit and next as int value
	printf("Enter a number: ");		//reading limit from user
	scanf("%d", &limit);
	negative_fibonacci(limit, 0, 1, 0);			//function call
	printf("\n");				//command to print new line
	return 0;					//returns 0 at the end of execution
}

void negative_fibonacci(int limit, int previous, int current, int next)		//function definition
{
	if(limit<=0)					//set condition to check for positive number
	{
		if (next>=limit && -limit >=next )		//set condition to print negative fibonacci number
		{
			printf("%d ", next);				//prints negative fibonacci numbers
			previous = current;
			current = next;
			next = previous - current;
			negative_fibonacci(limit, previous, current, next);			//recursive funtion, function calling itself
		}
	}
	else
		printf("Invalid input");				//error if limit is positive number
}
//stop
