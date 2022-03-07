/*
Name            : Harsh Shah
Date            : 13/01/2022
Description     : Read number num from user.
				  Read number val from user.
				  Read number a from user.
				  Read number b from user(a <= b <=31)
				  Do error checking
				  Check b is within limit or not.
				  Call replace_nbits_from_pos function by passing val, b - a + 1, b and num as arguments.
				  replace_nbits_from_pos(num, a, b, val);
				  Print the new value of i.
				  Prompt for continue option.

Input           : Enter the value of 'num' : 11
				  Enter the value of 'a' : 3
				  Enter the value of 'b' : 5
				  Enter the value of 'val': 174
Output          : Result : 158
*/

//start
#include<stdio.h>								//header files
int replace_nbits_from_pos(int num, int a, int b, int val);				//function prototype
int main()							//returns some int value at the end of execution
{
	int num,a,b,val, res = 0;				//defining num,a,b,val and res in an integer
	printf("Enter the value of 'num': ");		//reading num value from user
	scanf("%d", &num);
	printf("Enter the value of 'a': ");			//reading a value from user
	scanf("%d", &a);
	printf("Enter the value of 'b': ");			//reading b value from user
	scanf("%d", &b);
	printf("Enter the value of 'val': ");		//reading val from user
	scanf("%d", &val);
	if ( a<=b && b<=31)							//setting condition to enter b within limit and a less than b
	{
		res = replace_nbits_from_pos(num,a,b,val);		//function call
		printf("Result = %d\n" , res);  				//if condition satisfies then printing output
	}
	else	
	{
		printf("b is not within limit\n");				//if condition fails printing error
	}
	
	return 0;										//return 0 at the end of execution 
}

int replace_nbits_from_pos(int num, int a, int b, int val)		//function definition
{
	int n, res, d, e;
	n = b-a+1;
	d = num & ((1 << n ) -1 );				//to get n bits from num
	e = (val & (~(((1<<n)-1) << n)));				//to clear bits from pos in val
	res = (d << n) | e ;					//to print result
	return res;									//return res value to main function
}
//stop
