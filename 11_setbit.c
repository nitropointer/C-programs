/*
Name            : Harsh Shah
Date            : 27/12/2021
Description     : Read a number, M and N from the user. You need to check whether N th bit is set(1) or not, If yes, then you need to 				 	  clear the M th bit of the number and print the updated value of num
Input           : Enter the number: 19
	`			  Enter 'N': 1
				  Enter 'M': 4
Output          : Updated value of num is 3 
*/

//start
#include<stdio.h>				//header file
int main()						// return some int value at the end of execution
{
	int num, N, M, y;					//defining num, N, M, y as an int value 
	printf("Enter the number:");		//reading num value from user
	scanf("%d", &num);
	printf("Enter 'N':");				//reading N value from user
	scanf("%d", &N);
	printf("Enter 'M':");				//reading M value from user
	scanf("%d", &M);

	if ( (num & ( 1 << N)) != 0)		//checking condition for set bit whether it is set or not
	{
		y = num & ~(1<<M);				//if bit is set then clear Mth bit from num value and storing updated value in y
		printf("Updated value of num is %d\n", y);		//printing updated value
	}
	else
	{
		printf("Updated value of num is %d\n", num);		//else printing number as it is
	}
	return 0;									//return 0 as an int value
}
//stop
