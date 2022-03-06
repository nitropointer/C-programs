/*
Name            : Harsh Shah
Date            : 30/12/2021
Description     : Read a number from the user. Check number of set bits in a given number. If number of set bits is odd, then Bit parity				  is odd. Similarly, If number of set bits is even, then Bit parity is even. 
				  For example, If num = 7, number of set bits = 3 which is odd number, so bit parity is odd. Similarly, if num = 3, 				 	  number  of set bits = 2, bit parity should be even
Input           : Enter the number : 7
Output          : Number of set bits = 3
			      Bit parity is Odd
*/

//start
#include<stdio.h>				//header file
int main()						//returns some integer value at the end of execution
{
	int num, i, count=0;		//defining num, i, count in an unsigned int to get positive value
	printf("Enter the number: ");		//reading input from user
	scanf("%d", &num);
	for (i=0; i<31; i++)				//using for loop to check all the bits of number entered by user
	{
		if(((num >> i) & 1) == 1)		//checking condition how many bits are set
		count++;						//incrementing count after every bit which are set
	}
		printf("Number of set bits = %d\n", count);		//printing the number of set bits

	if( (count % 2) == 0)					//checking condition for bit parity 
	{
		printf("Bit parity is Even\n");			//if bit parity is even then printing output as even
	}
	else
	{
		printf("Bit parity is Odd\n");			//else printing output as an odd
	}
	return 0;
}
//stop
