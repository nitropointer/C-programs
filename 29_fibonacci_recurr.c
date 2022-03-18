/*
Name            : Harsh Shah
Date            : 25/1/2022
Description     : In mathematics, the Fibonacci numbers or Fibonacci sequence are the numbers in the following integer sequence 1, 1, 2,				  3, 5, 8, 13, 21, 34, 55, 89, 144 . . .OR 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144 . . .
				  By definition, the first two numbers in the Fibonacci sequence are either 1 and 1, or 0 and 1, depending on the chosen				  starting point of the sequence, and each subsequent number is the sum of the previous two.
Input           : Enter a number: 8
Output          : 0, 1, 1, 2, 3, 5, 8
*/

//start
#include<stdio.h>						//header files
void positive_fibonacci(int limit, int previous, int current, int next);		//function prototype
int main()						//main function
{
	int limit;				//defining limit as an int value
	printf("Enter a number: ");			//reading input from user
	scanf("%d", &limit);
	positive_fibonacci(limit, 0, 1, 0);
	printf("\n");			//this is command to print new line
	return 0;				//returns 0 after the end of execution
}

void positive_fibonacci(int limit, int previous, int current, int next)						//function definition
{
	if (next<=limit && limit> 0)						//setting condition for printing fibonacci series
	{
		printf("%d ", next);							//printing fibonacci series
		previous = current;
		current = next;
		next= previous + current;
		positive_fibonacci(limit, previous, current, next);			//function calling itself
	}
	else
		printf("Invalid input");					//if user enter negative value then prints error
}
//stop
