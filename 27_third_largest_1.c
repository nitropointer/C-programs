/*
Name            : Harsh Shah
Date            : 20/01/2022
Description     : Read size and array elements from the user. You need to find 3rd largest element in the array without sorting or modifying the array.
You need to pass array to the function. U need to collect array as pointer inside a function as shown below:
              int third_smallest(int *arr, int size);
In function you need to find third largest element of the array and you need to return it to the main

Input           : Enter the size of the Array : 5
                  Enter the elements into the array: 5 1 4 2 8
Output          : Second largest element of the array is 5
*/

//start
#include<stdio.h>										//header files
int thi_largest(int *arr, int size);					//function prototype
int main()												//returns some int value at the end of execution
{
    int size,i, ret;										//defining size and ret as an int value
    printf("Enter the size of the array :");			//reading array size from user
    scanf("%d", &size);
	int array[size];										//defining array size as an int value
	printf("Enter the elements into the array: ");		//reading array elements from user
	for(i=0; i<size; i++)
	{
		scanf("%d", &array[i]);
	}
    ret = thi_largest(array, size);						//function call
    printf("Third largest element of the array is %d\n", ret);		//printing output from return function
}

int thi_largest(int *arr, int size)					//funciton definition
{
	int i, second=0 ,index=0;							//defining i,second,index, and largest as an int value
	int largest,temp=0, large2=0, third = 0;
	for (i = 0; i<size; i++)						//using for loop to find largest value of element
	{
		if(*(arr + i) > temp )
		{
			temp = *(arr + i);						//storing largest value of array in largest variable
			largest= i;								//storing its index value in variable
		}
	}
	for(i=0;i<size; i++)						//using for loop to find second largest value of element
	{
		if(i != largest)
		{
			if( *(arr + i) > second )
			{
				second = *(arr + i);			//storing second largest element in variable
				large2=i;						//storing its index value in variable
			}
		}
	}

	for( i=0; i<size; i++)
	{
		if((i != largest) && (i != large2))		//checking condition to not include largest and second largest
		{
			if(*(arr+i) > third)
			{
				third = *(arr + i);				//third largest element of array is stored 
			}
		}
	}
	return third;							//returning third largest value
}
//stop
