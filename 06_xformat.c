/*
Name            : Harsh Shah
Date            : 30/12/2021
Description     : Read a number from user. Let's say if number is 5, you need to print numbers in X pattern as shown below:
				  If n = 5, then,
				  1___5
				  _2_4_
				  __3__
				  _2_4_
				  1___5
				  Note:- Please consider '_' as space.
Input           : Enter the number: 5
Output          : 1   5
				   2 4
  					3
				   2 4
				  1   5
*/

//start
#include<stdio.h>				//header file
int main()						//returns integer value at the end of execution
{
	int num;					//defining num,i,j as an integer value
	int i,j;
	printf("Enter the number: ");		//reading a number from user 
	scanf("%d", &num);
	for (i=1; i<=num; i++)				//This is a for loop for rows to be printed
	{
		for (j=1; j<=num; j++)			//This is a for loop for columns to be printed
		{
			if((i == j) || (i+j) == (num+1))		//checking condition to print in an X format
				printf("%d", j);					//printing output as given above in comment section
			else
				printf(" ");						//if condition fails then printing spaces
		}
		printf("\n");								//this is a command to print a new line
	}
	return 0;										//returns 0 as an int value
}
//stop
