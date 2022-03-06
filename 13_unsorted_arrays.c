/*
Name            : Harsh Shah
Date            : 7/1/2022
Description     : In probability theory and statistics, a median is described as the number separating the higher half of a sample, a 					  population, or a probability distribution, from the lower half. The median of a finite list of numbers can be found by				  arranging all the numbers from lowest value to highest value and picking the middle one.
				  Example:
 				  For getting the median of input array { 12, 11, 15, 10, 20 }, first sort the array. We get { 10, 11, 12, 15, 20 } 					  after sorting. Median is the middle element of the sorted array which is 12.
Input           : Enter the 'n' value for Array A: 5
				  Enter the 'n' value for Array B: 5
				  Enter the elements one by one for Array A: 3 2 8 5 4
				  Enter the elements one by one for Array B: 12 3 7 8 5
Output          : Median of Array1 : 4
				  Median of Array2 : 7
			      Average of 2 medians : 5.5   
*/

#include<stdio.h>
int main()
{
	int size1, index1,i,j,temp1, a, b, sum;					//defining different variables as an int
	int size2, index2, l, k, temp2, d, e, total;
	float c,f, avg2, avg3,avg1, avg4;					//defining averages of medians as an float integer

	printf("Enter the 'n'value for Array A: ");			//reading size of 1st array from user
	scanf("%d", &size1);
	printf("Enter the 'n'value for Array B: ");			//reading size of 2nd array from user
	scanf("%d", &size2);

	int arr1[size1], arr2[size2];						//defining both arrays as an integer

	printf("Enter the elements one by one for Array A: ");		//reading elements of array 1 from user using for loop
	for (index1 = 0; index1 < size1; index1++)
	{
		scanf("%d", &arr1[index1]);
	}

	printf("Enter the elements one by one for Array B: ");		//reading elements of array 2 from user using for loop
	for (index2 = 0; index2 < size2; index2++)
	{
		scanf("%d", &arr2[index2]);
	}

	for(i=0; i < size1 -1; i++)							//using nested for loop and bubble sorting first array elements
    {
        for (j=0; j < size1 -1 -i; j++)
        {
            if (arr1[j] > arr1[j+1] )
            {
                temp1 = arr1[j];
                arr1[j] = arr1[j+1];
                arr1[j+1] = temp1;
            }
        }
    }
		if( size1 % 2 == 0)					//checking array size condition whether even or odd, if even then entering if block
		{
			a = arr1[index1/2];
			b = arr1[(index1/2) - 1];
			c = (float)(a+b)/2;
			printf("Median of Array1 : %g ", c);			//printing median of first array
		}
		else
		{
			sum = size1/2;					//if condition fails then entering else block
			printf("Median of array1 : %d ", arr1[sum]);		//printing median of first array
		}
	printf("\n");			//this is command to print new line

	for(k=0; k < size2 -1; k++)							//using nested for loops and bubble sorting second array elements
    {
        for (l=0; l < size2 -1 -k; l++)			
        {
            if (arr2[l] > arr2[l+1] )
            {
                temp2 = arr2[l];
                arr2[l] = arr2[l+1];
                arr2[l+1] = temp2;
            }
        }
    }

		if( size2 % 2 == 0)		//checking array size condition whether even or odd, if even then entering if block
		{
			d = arr2[index2/2];
			e = arr2[(index2/2) - 1];
			f = (float)(d+e)/2;
			printf("Median of Array2 : %g ", f);		//printing median of array2
		}
		else
		{
			total = size2/2;				//if condition fails then entering else block

			printf("Median of Array2 : %d ", arr2[total]);		//printing median of 2 array elements
		}
		printf("\n"); 			//this is command to print new line

		if(((size1 % 2) == 0) && ((size2 % 2) == 0 ))		//if both array size are even then entering if block
		{
			avg2 = (f + c)/2;
			printf("Average of 2 medians : %g ", avg2);		//printing average of both medians
		}
		if (((size1 % 2) != 0) && ((size2 % 2) ==0))		//if first array size is odd and second is even then entering if block
		{
			avg1 = (float) (arr1[sum]+f)/2;
			printf("Average of 2 medians : %g ", avg1);		//printing average of both medians
		}
		if (((size1 % 2) == 0) && ((size2 % 2) !=0))		//if first array size is even and second is odd then entering if block
		{
			avg3 = (float) (c+arr2[total])/2;
			printf("Average of 2 medians : %g ", avg3);		//printing average of both medians
		}
		if(((size1 % 2) != 0) && ((size2 % 2) != 0 ))		//if both arrays are odd then entering if block
		{
			avg4 = (float)(arr1[sum]+arr2[total])/2;
			printf("Average of 2 medians : %g ", avg4);		//printing average of both median
		}

	printf("\n");			//this is command to print new line
	return 0;				//return 0 as an int value to check whether program is terminated or not
}
//stop
