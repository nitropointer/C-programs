/*
Name            : Harsh Shah
Date            : 20/12/2021
Description     : In mathematics, the Fibonacci numbers or Fibonacci sequence are the numbers in the following integer sequence  0, 1, -1, 2, -3, 5, -8, 13, -21, 34, -55, 89, -144 . . .
				  By definition, the first two numbers in the Fibonacci sequence are 0 and 1, each subsequent number is the subtraction of the previous two
Input           : Enter a number: -8
Output          : 0, 1, -1, 2, -3, 5, -8
*/

//start
#include<stdio.h>		//header files
int main()				//returns some integer value at the end of execution
{	
	int num, c=0 ;		//defining num, a,b,c as a integer value
	int a = 0;
	int b = 1;
	
	printf("Enter a number: ");			//reading value of num from user
	scanf("%d", &num);
	if ( num <= 0 )						//checking condition whether num entered is less than equal to zero
	{
				while(c>=num && -num>=c)		//using while loop checking condiiton for fibonacci 
				{
					printf("%d ", c);			//printing negative fibonacci series
					a=b;
					b=c;
					c = a - b;					
				}
			
				printf("\n");				//command to print new line
	}
	else 								//if positive number is passed then error will be printed
	{
		printf("Invalid input\n");
	}
return 0;								//returns integer value as 0
}
//stop
