/*
Name            : Harsh Shah
Date            : 19/2/2022
Description     : n recreational mathematics, a magic square is an arrangement of distinct numbers (i.e. each number is used once), 					  usually integers, in a square grid, where the numbers in each row, and in each column, and the numbers in the main and				  secondary diagonals, all add up to the same number
				  A magic square has the same number of rows as it has columns, and in conventional math notation, "n" stands for the				      number of rows (and columns) it has. Thus, a magic square always contains n2 numbers, and its size (the number of rows				  [and columns] it has) is described as	being "of order n".
			      Example: if n = 3, the magic square
     			  		 8         1     		 6     
	 					 3     	   5     		 7     
     					 4     	   9     		 2     

				  Read an odd number n from user.
				  Do error checking.
				  Check the number is odd or not.
				  If not, continue step a.
				  Create an n X n matrix.
				  Insert 1 to (n * n) numbers into matrix.
				  Arrange the numbers in such a way that, adding the numbers in any direction, either row wise column wise or diagonal 				      wise, should result in same answer.
				  Allocate the memory dynamically using calloc.

Input           : Enter a number: 3
Output          : 8      1      6
				  3      5      7
			      4      9      2
*/

#include<stdio.h>										//header files
#include<stdlib.h>										//heade files
void magic_square(int **ptr, int len);					//function protoype

int main()												//main function
{
	int num,i,j;							
	printf("Enter the number: ");						//reading number from user
	scanf("%d", &num);
	if(num%2 == 0)										//checking number for even
	{
		printf("Error : Please enter only positive odd numbers\n");			//printing error if number is even
		exit(0);										//terminating program
	}
	int **array;										//initializing double pointer array
	array = malloc(num * sizeof(int*));					//allocating row memory dynamically
	for(i=0; i<num; i++)
	{
		array[i] = malloc(num * sizeof(int*));				//allocating memory for column dynamically
	}
	for(i=0; i<num; i++)								//storing all numbers in matrix as 0 using loop
	{
		for(j=0; j<num; j++)
		{
			array[i][j] = 0;
		}
	}
	magic_square(array, num);							//function call
	return 0;
}

void magic_square(int **array, int num)					//function definition
{
	int i,j=0,k;				
	k = num/2;											//storing 1 in k
	int p,q;											//initialing variables to store increment value
	for(i=1; i<=num*num; i++)							//using loop to find magic square
	{
		array[j][k] = i;								//storing matrix as magic square
		p = j--;										//decrementing j value
		q = k++;										//incrementing k value
		if(k>num-1)										//if condition satisifes then storing again k as 0
		{
			k = 0;
		}
		if(j<0)											//if condition satisfies then storing j = num -1
		{
			j = num -1;
		}
		if(array[j][k] !=0)								//checking for number which are non zero 
		{
			k = q;
			j = p+1;
		}
	}
	for(j=0;j<num;j++)
	{
		for(k=0;k<num;k++)
		{
			printf("%d ", array[j][k]);					//printing magic square
		}
		printf("\n");
	}
}
//stop
