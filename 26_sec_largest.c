/*
Name            : Harsh Shah
Date            : 20/01/2022
Description     : Read size and array elements from the user. You need to find 2nd largesst element in the array without sorting or                       modifying the array.
                  You need to pass array to the function. U need to collect as pointer inside a function as shown below:
                  int sec_largest(int *arr, int size);
                  In function you need to find second largest element of the array and you need to return it to the main
Input           : Enter the size of the Array : 5
                  Enter the elements into the array: 5 1 4 2 8
Output          : Second largest element of the array is 5
*/

//start
#include<stdio.h>										//header files
int sec_largest(int *arr, int size);					//function prototype
int main()												//returns some int value at the end of execution
{
    int size, ret;										//defining size and ret as an int value
    printf("Enter the size of the array :");			//reading array size from user
    scanf("%d", &size);
	int arr[size];										//defining array size as an int value
    ret = sec_largest(arr, size);						//function call
    printf("Second largest element of the array is %d\n", ret);		//printing output from return function
}

int sec_largest(int *arr, int size)					//funciton definition
{
	int i, second ,index=0;							//defining i,second,index, and largest as an int value
	int largest;
    int array[size];								//defining array as an int value
	printf("Enter the elements into the  array: ");		//reading array elements from user
	for (i=0; i<size; i++)
	{
		scanf("%d", &array[i]);
	}
	largest = 0;
	for (i = 1; i<size; i++)						//using for loop to find largest value of element
	{
		if(array[i]>largest)
		{
			largest = array[i];						//storing largest value of array in largest variable
			index = i;								//storing its index value in variable
		}
	}
	second = 0;
	for(i=0;i<size; i++)						//using for loop to find second largest value of element
	{
		if(index!=i && array[i]>second)
		{
			second = array[i];
		}
	}
	return second;							//returning second largest value
}
//stop
