/*
Name            : Harsh Shah
Date            : 14/01/2022
Description     : Read a number num from user.
				  Read a number n from user.
				  Pass num and n to the function.
				  Shift num, n times (towards right).
				  While shifting the shifted bits should get replaced at the alternate end.
				  For right shifting, the shifted bits should come at left most side.
				  Return the new number from the function.
				  Print the new number.
Input           : Enter num: 12
			  	  Enter n : 3
Output          : Result : 10000000 00000000 00000000 00000001
*/

//start
#include<stdio.h>								//header files
int circular_right(unsigned int num, int n);		//function prototype for circular right shift
int print_bits(int ret);					//function prototype of prints bits
int main()							//retrurns some int value at the end of execution
{
	int num,n,ret;					//defining num,n,ret as an int value
	printf("Enter num: ");			//reading number from user
	scanf("%d", &num);
	printf("Enter n: ");			//reading n value from user
	scanf("%d", &n);
	ret = circular_right(num, n);	//function call for circular right
	printf("Result: ");
    print_bits(ret);				//function call for print bits
	return 0;						//return 0 as an int value at the end of execution
}

int circular_right(unsigned int num, int n)			//function definition of circular right shift
{
	int a,b,ret;							//defining a,b,ret as an int value
	a = (num << (32 -n));
	b =  num >> n;
	ret = a | b;
	return ret;								//defining ret value to print output
}

int print_bits(int ret)						//function definition of print bits
{
	int i;
	for (i=0; i<=31; i++)					//using for loop to collect all the bits and printing output
	{
		if ( ret & (1 << (31 - i)))
		{
			printf("1 ");
		}
		else
		{
			printf("0 ");
		}
	}
	printf("\n");							//this is command to print new line
}
//stop
