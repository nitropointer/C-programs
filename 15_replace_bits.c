/*
Name            : Harsh Shah
Date            : 10/01/2022
Description     : a. Read number num from user.
			   	  b. Read number n from user.
				  c. Read number val from user
				  d. Fetch n number of bits from LSB end of val and replace in the last n bits of num.
				  e. Return new value of num. If num is 10 and n is 3 and val is 12
				  10 -> 0 0 0 0 1 0 1 0 
			 	  12 -> 0 0 0 0 1 1 0 0 
				  The program should print result as 12 (1 1 0 0)
Input           : Enter the number: 10

				  Enter number of bits: 3

				  Enter the value: 12
Output          : Result = 12
*/

//start
#include<stdio.h>					//header files
int replace_nbits(int num, int n, int val);				//function prototype to tell compiler there is some function present 
int main()						//returns some integer value at the end of execution
{
	int num,n,val, res = 0;				//defining num, n, val and res as integer
	printf("Enter the number: ");		//reading number from user
	scanf("%d", &num);
	printf("Enter number of bits: ");		//reading no of bits to be replaced reading from user 
	scanf("%d", &n);
	printf("Enter the value: ");		//reading value from user
	scanf("%d", &val);
	res = replace_nbits(num,n,val);			//function call to print output
	printf("Result = %d\n", res);			//printing the output
	return 0;							//returns 0 as an int value to know whether program is terminated or not
}

int replace_nbits(int num, int n, int val)		//function defination 
{
	int a,res;
	a = val & ((1<<n) - 1);
	res = (num & (~((1<<n)-1))) | a;
	return res;									//returns output to function call
}
//stop
