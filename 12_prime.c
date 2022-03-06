/*
Name            : Harsh Shah
Date            : 8/1/2022
Description     : In mathematics, the sieve of Eratosthenes, one of a number of prime number sieves, is a simple, ancient algorithm for 				  finding all prime numbers up to any given limit. It does so by iteratively marking as composite (i.e., not prime) the 				  multiples of each prime, starting with the multiples of 2.
				  The sieve of Eratosthenes is one of the most efficient ways to find all of the smaller primes. It is named after 						  Erato sthenes of Cyrene, a Greek mathematician.
Input           : Enter the value of 'n' : 20
Output          : The primes less than or equal to 20 are : 2, 3, 5, 7, 11, 13, 17, 19
*/

//start
#include<stdio.h>				//header files
int main()						//returns some integer value at the end of execution
{
	int n, i, j;				//defining n,i and j as an integer value
	printf("Enter the value of 'n' :");		//reading value from user
	scanf("%d", &n);
	if (n > 1 )			//checking condition for positive numbers
	{
	int arr[n];					//defining array as an integer
	
		for (i=1; i<=n; i++)			//this is for loop to collect all the elements of array
		{
			arr[i] = i;					//collecting array in an i variable
		}	
		for (i = 2; i<=n; i++)			//this is for loop to execute all the elements of array
		{
			for (j = 2*i; j<=n; j+=i)		//this is for loop to fetch non prime numbers and replace it with zero
			{
				if ( (j*i) % i == 0)		//setting condition to find out all non prime numbers
				{
					arr[j] = 0;
				}
			}
		}
		printf("The prime less than equal to %d are\n", n);			//printing output 
		for(i = 2; i<=n; i++)									//collecting all prime numbers in array and printing
		{
			if (arr[i] != 0)
			printf("%d ", arr[i]);
		}
		printf("\n");					//this is command to print new line
	}
	else
	{
		printf("Please enter a positive number which is > 1\n");		//if user enters negative number then printing error
	}
		return 0;			//returns 0 as an int value to check whether program is terminated or not
}
//stop
