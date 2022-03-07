/*
Name            : Harsh Shah
Date            : 13/01/2022
Description     : Read a number num from user.
				  Read a number n from user.
				  Pass num and n to the function.
				  Shift num, n times (towards left).
				  While shifting the shifted bits should get replaced at the alternate end.
				  For left shifting, the shifted bits should come at right most side.
				  Return the new number from the function.
				  Print the new number.

Input           : Enter num: 12
				  Enter n : 3
Output          : Result in Binary: 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 1 1 0 0 0 0 0
*/

#include<stdio.h>								//header files
int circular_left(unsigned int num, int n);		//function prototype
int print_bits(int ret);						//function prototype
int main()								//returns some int value at the end of execution
{
	int num,n,ret;						//defining some int value at the end of execution
	printf("Enter num: ");				//reading num value from user
	scanf("%d", &num);
	printf("Enter n: ");				//reading n value from user
	scanf("%d", &n);
	ret = circular_left(num, n);		//function call for circular left shift
	printf("Result in Binary: ");		//printing output in binary form
    print_bits(ret);					//function call for print_bits
	return 0;							//returns 0 as an int value at the end of execution
}

int circular_left(unsigned int num, int n)			//function definition of circular_left_shift
{
	int a,b,ret;							//defining a,b,ret
	a = (num >> (32 -n));
	b =  num << n;
	ret = a | b;						//storing output in ret and returning
	return ret;
}

int print_bits(int ret)					//function definition of print_bits
{
	int i;
	for (i=0; i<=31; i++)				//collecting all binary digits using for loop
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
	printf("\n");						//this is command to print new line
}
//stop
