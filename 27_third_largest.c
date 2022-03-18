/*
Name            : Harsh Shah
Date            : 20/01/2022
Description     : Read size and array elements from the user. You need to find 2nd largesst element in the array without sorting or 						  modifying the array.
				  You need to pass array to the function. U need to collect as pointer inside a function as shown below:
              	  int sec_largest(int *arr, int size);
			 	  In function you need to find second largest element of the array and you need to return it to the main
Input           : Enter the size of the Array : 5
				  Enter the elements into the array: 5 1 4 2 8
Output          : Second largest element of the array is 5
*/

//start
#include<stdio.h>							//header files
int third_smallest(int *arr, int size);		//function prototype
int main()									//returns some integer value at the end of execution
{
    int size, ret;							//defining size,ret as an int value
    printf("Enter the size of the array :");		//reading size from user
    scanf("%d", &size);
	int arr[size];							//defining array as an int value
    ret = third_smallest(arr, size);		//function call
    printf("Third largest element of the array is %d\n", ret);			//printing output from function value
	return 0;								//returns 0 as an int value to check whether program is terminated or not
}

int third_smallest(int *arr, int size)		//function definition
{
	int i, second ,index=0, index1=0,third;		//defining i,second,index,index1 and third as an int value
	int largest;							//defining largest as an int
    int array[size];						//defining array as an integer
	printf("Enter the elements into the  array: ");			//reading and printing array element
	for (i=0; i<size; i++)
	{
		scanf("%d", &array[i]);
	}
	largest = 0;						//storing first array element as an largest value
	for (i = 0; i<size; i++)
	{
		if(array[i]>largest)
		{
			largest = array[i];				//storing largest element 
			index = i;						//storing largest element index in variable
		}
	}
	second = 0;
	for(i=0;i<size; i++)
	{
		if(index!=i && array[i]>second)
		{
			second = array[i];				//storing second largest element
			index1 = i;						//storing second largest element index in variable
		}
	}
	third = 0;
	for(i=0; i<size; i++)
	{
		if(array[i]>third && index1!=i && index!=i)
		{
			third = array[i];						//printing third element and returning it to main function 
		}
	}
//	}

	return third;
}
//stop
