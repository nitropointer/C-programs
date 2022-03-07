/*
Name            : Harsh Shah
Date            : 10/01/2022
Description     : a. Read number num from user.
				  b. Read number n from user.
				  c. Read number pos from user.
				  d. Fetch n number of bits from given position 'pos' (starting from LSB) of num and return the decimal value of it.
				  If num is 12, n is 3 and pos is 4
         				7 6 5 4 3 2 1 0
				  12 -> 0 0 0 0 1 1 0 0 
				  The program should print 3 (0 1 1).		   	  			 	  
Input           : Enter the number: 12

				  Enter number of bits: 3

				  Enter the pos: 4 
Output          : Result = 3
*/

//start
#include<stdio.h>					//header files
int get_nbits_from_pos(int num, int n, int pos);		//function prototype to tell compiler there is some function present 
int main()						//returns some integer value at the end of execution
{
	int num,n,pos, res = 0;				//defining num, n, val and res as integer
	printf("Enter the number: ");		//reading number from user
	scanf("%d", &num);
	printf("Enter number of bits: ");		//reading no of bits to be replaced reading from user 
	scanf("%d", &n);
	printf("Enter the pos: ");		//reading position value from user
	scanf("%d", &pos);
	res = get_nbits_from_pos(num,n,pos);			//function call to print output
	printf("Result = %d\n", res);			//printing the output
	return 0;							//returns 0 as an int value to know whether program is terminated or not
}

int get_nbits_from_pos(int num, int n, int pos)		//function defination 
{
	int res;
	res = (num >> (pos + 1 - n) & ~(~0 << n));
	return res;									//returns output to function call
}
//stop
