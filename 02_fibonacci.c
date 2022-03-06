/*
Name            : Harsh Shah
Date            : 19/12/2021
Description     : In mathematics, the Fibonacci numbers or Fibonacci sequence are the numbers in the following integer sequence 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144 . . . OR 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144 . . .
				 By definition, the first two numbers in the Fibonacci sequence are 0 and 1, each subsequent number is the sum of the previous two
Input           : Enter a number: 8
Output          : 0, 1, 1, 2, 3, 5, 8
*/

#include<stdio.h>			//Header files
int main()					//return int value at the end of exceution
{	
	int num;				//defining num a,b and c in int variable
	int a = 0;
	int b = 1;
	int c = 0;
	printf("Enter a number: ");		//reading input from user
	scanf("%d", &num);
	if(num >= 0)
	{
			while( c <= num)		//setting condition in while loop to print fibonacci sequence
			{
				printf ("%d ", c);	//printing fibonacci sequence
				a=b;
				b=c;
				c = a+b ;
			}
			printf("\n");			//command to bring cursor to new line
	}
	else
	{
		printf("Invalid input\n");
	}
return 0;							//return int value 0
}
