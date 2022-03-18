/*
Name            : Harsh Shah
Date            : 18/2/2022
Description     : In probability theory and statistics, variance measures how far a set of numbers is spread out. A variance of zero    				  indicates that all the values are identical. Variance is always non-negative: a small variance indicates that the     				  data points tend to be very close to the mean (expected value) and hence to each other, while a high variance         				  indicates that the data points are very spread out around the mean and from each other.
				  Example:
  				  x(input)                D = X - Mean                   D2
				  9                          -11                                   121
				  12                        -8                                     64
				  15                        -5                                     25
				  18                        -2                                     4
				  20                         0                                     0
				  22                         2                                     4
				  23                         3                                     9
				  24                         4                                     16
				  26                         6                                     36
				  31                         11                                   121
				  Sum = 200                                                  Sum = 400
				  Mean = (sum of x) / size
				  where : size = Number of items in the input
				  Formula to calculate the variance:
				  sigma = (sum of D2 ) / size
Input           : Enter the no.of elements : 10

				  Enter the 10 elements:
				  [0] -> 9
				  [1] -> 12
			 	  [2] -> 15
				  [3] -> 18
				  [4] -> 20
				  [5] -> 22
				  [6] -> 23
				  [7] -> 24
				  [8] -> 26
				  [9] -> 31
Output          : Variance is 40.000000
*/

//start
#include<stdio.h>								//header files
#include<stdlib.h>								//header files 
float variance(int *ptr, int num);				//function prototype
int main()										//main function
{
	int size,i;									//declaring size and i as an int
	float ret;									//declaring ret as an float
	printf("Enter the no. of elements: ");		//reading array size from user
	scanf("%d", &size);
	int *ptr = malloc(size * sizeof(int));		//allocating array memory as a dynamic memory allocation and storing in pointer
	printf("Enter the %d elements\n", size);
   	for(i=0; i<size; i++)						//using loop to read and print array element
	{
		printf("[%d] -> ", i);
		scanf("%d", &ptr[i]);
	}	
	ret = variance(ptr, size);					//function call
	printf("Variance is %f\n", ret);			//printing output
}

float variance (int *ptr, int size)				//function definition
{
	int sum = 0,i,D[size], A[size];				//declaring sum total two arrays and mean
	int mean,total = 0;
	float variance;								//declaring variance as a float
	for(i=0;i<size;i++)
	{
		sum = sum + *(ptr+i);
	}
	mean = sum / size;							//finding mean
	for(i=0; i<size; i++)						//using loop to find deviance and variance
	{
		D[i] = *(ptr + i) - mean;
		A[i] = D[i] * D[i];
		total = total + A[i];
	}
	variance = (float) total / size;			
	return variance;							//return variance
}
//stop
