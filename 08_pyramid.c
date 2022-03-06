/*
Name            : Harsh Shah
Date            : 09/12/2021
Description     : Read a number from user. Let's say if number is 5, you need to print numbers in pyramid pattern as shown below:
				  If n = 5, then,
				  5
				  4 5
				  3 4 5
				  2 3 4 5
				  1 2 3 4 5
				  2 3 4 5
				  3 4 5
				  4 5
				  5
				  Note:- Please consider '_' as space. You need to leave space between 2 numbers
Input           : Enter the number: 4
Output          : 4
				  3 4
				  2 3 4
				  1 2 3 4
				  2 3 4
				  3 4
				  4
*/

//start
#include<stdio.h>				//Header files
int main()						//returns some integer value at the end of execution 
{
	int i,n,j,a = 0;					//defining i,j,n and a as an integer
	printf("Enter the number: ");		//reading number from user
	scanf("%d", &n);
	for (i=1; i<=n; i++)				//This is for loop for row to print upside pyramid pattern
	{
		for (j = 1; j<=i; j++)			//This is for loop for columns to printf upside pyramid pattern
		{
			
			if (j - i == 0)				//setting condition to print above pyramid pattern
			{
				printf("%d ", n);		//printing output as per requirement
			}
			if (j - i != 0)				//setting condition to print above pyramid pattern
			{
				a = (n + j ) - i;
				printf("%d ", a);		//printing output as per requirement
			}			
		}
			printf("\n");				//this is command for new line
	}
	for (i=1; i<n; i++)					//This is for loop for row to print downside pattern
    {
        for (j = n-1; j>=i; j--)		//This is for loop for column to print downside pattern
        {
            if (j - i == 0)				//setting condition to print downside pattern
            {
                printf("%d ", n);		//printing output as per requirement
            }
            if (i-j != 0)				//setting condition to print downside pattern
            {
                a = (n - j) + i;
                printf("%d ", a);		//printing output as per requirement
            }
		}
		printf("\n");					//this is command to print new line
	}
	return 0;							//returns 0 as int value at the end of execution to know program is terminated or not
}
//stop
