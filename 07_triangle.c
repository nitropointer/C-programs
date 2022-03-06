/*
Name            : Harsh Shah
Date            : 6/1/2022
Description     : Read a number from user. Let's say if number is 5, you need to print numbers in triangle pattern as shown below:
				  If n = 5, then,
				  1 2 3 4 5
				  6 _ _ 7
				  8 _ 9
				  10 11
				  12
				  Note:- Please consider '_' as space. You need to leave space between 2 numbers
Input           : Enter the number: 4
Output          : 1 2 3 4
				  5   6
				  7 8
				  9
*/

//start
#include<stdio.h>				//header files
int main()						//returns some integer value at the end of execution
{
	int num, count = 0;			//defining num, count ,i and j as an int value
	int i,j;
	printf("Enter the number: ");		//reading the number from user
	scanf("%d", &num);
	for (i=1; i<=num; i++)				//this is for loop for rows to print above pattern
	{
		for (j=i; j<=num; j++)			//this is for loop for columns to print above pattern
		{
			if(i == 1 || j == i || j == num)			//setting condition to print above pattern
			{
				count++;							//incrementing count after every for loop
				printf("%d ", count);				//printing output 
			}
			else					
			{		
				printf("  ");					//printing space as output requirement
			}
		}
		printf("\n");							//this is command to print new line
	}
	return 0;			//return 0 as int value to check program is terminated or not
}
//stop
