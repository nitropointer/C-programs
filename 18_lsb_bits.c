/*
Name            : Harsh Shah
Date            : 12/01/2022
Description     : a. Read number num from user.
				  b. Read number n from user.
				  c. Do error checking
					  -> If n is greater than integer size, assign n value as sizeof integer.
				  d. Print n number of bits of num from LSB end.
				  If num is 10 and n is 12, then print last 12 bits of binary representation of 10.
				  The output should be -> 0 0 0 0 0 0 0 0 1 0 1 0
Input           : Enter the number: 10

				  Enter number of bits: 12
Output          : Binary form of 10: 0 0 0 0 0 0 0 0 1 0 1 0 
*/

//start
#include<stdio.h>					//header files
int print_bits(int num, int n);		//function prototype 
int main()							//returns some integer value at the end of execution
{
	int num, i, n;					//defining num i and n as an int value
	printf("Enter the number: ");		//reading number from user 
	scanf("%d", &num);
	printf("Enter number of bits: ");		//reading number of bits from user
	scanf("%d", &n);
	printf("Binary form of %d: ", num);		//printing no of bits
    print_bits(num, n);						//calling function to execute output
}

int print_bits(int num, int n)				//function definition
{
	int i ;							//defining i as an integer
	for (i=1; i<=n ; i++)			//using for loop to print all lsb digits as per condition
	{
		if ( num & (1 << (n - i)))		//setting condition to print lsb digits
		{
			printf("1 ");
		}
		else
		{
			printf("0 ");
		}
	}
	printf("\n");				//this is the command to print new line
	
}
//stop
