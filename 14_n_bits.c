/*
Name            : Harsh Shah
Date            : 09/1/2022
Description     : If num is 10 and n is 2,

				  10 -> 0 0 0 0 1 0 1 0 

				  Take 2 bits from LSB end of 10 (1 0) and return the corresponding decimal of that. 

				  So get_nbits(10, 2) function should return 2

Input           : Enter the number: 10

				  Enter number of bits: 3
Output          : Result = 2
*/

//start
#include<stdio.h>					//header files
int get_nbits(int a, int b);		//defining function prototype 
int main()							//returns some int value at the end of execution
{
	int num, n, res = 0;			//defining num,n and res as integer value
	printf("Enter the number: ");		//reading number from user
	scanf("%d", &num);
	printf("Enter number of bits: ");		//reading no of bits from user
   	scanf("%d", &n);	
	res = get_nbits(num,n);					//this is function definition ,compiler jumps direct to function and executes it
	printf("Result = %d\n", res);			//after function is executing it return the output and printed here
	return 0;					//return 0 as an int value to check program is terminated or not
}

int get_nbits(int a, int b)				//this is function call where program after function call is executed 
{
	int res= 0;
	res = a & ((1<<b) - 1);
	return res;				//return output to funciton definition
}
//stop
