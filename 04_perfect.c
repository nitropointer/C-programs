/*
Name            : Harsh Shah
Date            : 19/12/2021
Description     : n number theory, a perfect number is a positive integer that is equal to the sum of its proper positive divisors, that 				  is, the sum of its positive divisors excluding the number itself (also known as its aliquot sum).
         		  Equivalently, a perfect number is a number that is half the sum of all of its positive divisors (including itself).
Input           : Enter a number: 6
Output          : Yes, entered number is perfect number
*/

//start
#include<stdio.h>					//header file
int main()							//returns some integer value at the end of execution
{	
	int num, sum = 0,i;				//defining num sum and i as an int value
	printf("Enter a number: ");		//reading input from user
	scanf("%d", &num);
	if ( num > 0 )					//checking condition for num if it is positive then entering in if condition
	{
		for(i=1; i<=num/2; i++)		//using for loop to find divisor to find perfect number
		{
			 if(num%i == 0)			//checking modulo operator, if condition is true than executing further
			 {
				 sum = sum + i;		//adding all divisor
			 }
		}
		if ( sum == num )			//if number and summation of all divisor equals then it is perfect number
		{
			printf("yes, entered number is a perfect number\n");		//printing perfect number as a output
		}
		else
		{
			printf("No, entered number is not a perfect number\n");		//else printing it is not perfect number
		}

	}
	else 											//if number entered is negative than printing error
	{
		printf("Error : Invalid Input, Enter only positive number\n");
	}
return 0;										//returns 0 as an int value
}
//stop
