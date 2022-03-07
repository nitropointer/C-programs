/*
Name            : Harsh Shah
Date            : 11/01/2022
Description     : a. Read number num from user.
				  b. Read number n from user.
				  c. Read number pos from user.
				  d. Invert the n number of bits from pos positionth bit of num.
				  e. Return the new value of num
				  If num is 10, n is 3, and pos is 5
                       			 7 6 5 4 3 2 1 0
               	  10 -> 0 0 0 0 1 0 1 0
				  return value -> 0 0 1 1 0 0 1 0
				  So the function should return 50 (0 0 1 1 0 0 1 0)		   	  			 	  
Input           : Enter the number: 10

			      Enter number of bits: 3

				  Enter the pos: 5
				  
Output          : Result = 50
*/

//start
#include<stdio.h>					//header files
int toggle_nbits_from_pos(int num, int n, int pos);		//function prototype to tell compiler there is some function present 
int main()						//returns some integer value at the end of execution
{
	int num,n,pos, res = 0;				//defining num, n, pos and res as integer
	printf("Enter the number: ");		//reading number from user
	scanf("%d", &num);
	printf("Enter number of bits: ");		//reading no of bits to be replaced reading from user 
	scanf("%d", &n);
	printf("Enter the pos: ");		//reading position value from user
	scanf("%d", &pos);
	res = toggle_nbits_from_pos(num,n,pos);			//function call to print output
	printf("Result = %d\n", res);			//printing the output
	return 0;							//returns 0 as an int value to know whether program is terminated or not
}

int toggle_nbits_from_pos(int num, int n, int pos)		//function defination 
{
	int res, a;
	a = ((1 << n ) - 1);
	res = num ^ (a << (pos - n + 1));
	return res;									//returns output to function call
}
//stop
