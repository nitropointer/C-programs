/*
Name            : Harsh Shah
Date            : 31/1/2022
Description     : Read n and n no.of elements from user and store them into an array.
			      Run a loop for printing the elements in sorted order.
Input           : Enter the size : 5
				  Enter 5 elements 
				  10 1 3 8 -1
Output          : After sorting: -1 1 3 8 10
				  Original array values 10 1 3 8 -1
*/

//start
#include<stdio.h>								//header files
void print_sort(int *arr, int size);			//function prototype as an void 
int main()										//main function 
{
    int size, iter;								//defining array size as an int

    printf("Enter the size: ");					//reading size of array from user
    scanf("%d", &size);

    int arr[size];								//defining array as an int

    printf("Enter %d elements: ", size);		//printing array elements after user entered all elements
    for (iter = 0; iter < size; iter++)
    {
        scanf("%d", &arr[iter]);
    }

    print_sort(arr, size);						//function call
	printf("Original array values ");			//after sorting printing origninal elements 
	for(iter = 0; iter<size; iter++)
	{
		printf("%d ", arr[iter]);
	}
	printf("\n");								//this is command to print new line
	return 0;									//returns 0 at the end of execution
}

void print_sort(int *arr, int size)				//function definition
{
	int smallest=arr[0],i,j,smallest1 = arr[0],largest = arr[0];	//defining smallest, largest and smallest1 as an int
	for(i=0; i<size; i++)						//using for loop to found smallest and largest element
	{
		if(arr[i]<smallest)						//setting condition to find smallest element
		{
			smallest = arr[i];
		}
		if(arr[i]>largest)						//setting condition to find largest element
		{
			largest = arr[i];
		}
	}
	printf("After sorting: ");
	printf("%d ", smallest);					//smallest element
	while(smallest != largest)					//using while loop to print rest all other elements in sorted form
	{
		for(j=0; j<size; j++)					//using for loop to find next smallest element
		{
				if(arr[j] > smallest && arr[j] != smallest )  //setting condition to find next element
				{
					 smallest1=arr[j];			//storing next smallest element in smallest1 variable
					 break;
				}
		}
		for(j=0; j<size; j++)					//using for loop to find next all elements
		{
				if(arr[j]<smallest1 && arr[j] > smallest)		//using if condition to find all other elements
				{
					smallest1 = arr[j];			//storing all elements in smallest1 variable
				}
			
		}
		printf("%d ", smallest1);				//printing all the elements in sorted form
		smallest = smallest1;					//updating elements to find next one
	}
	printf("\n");								//command to print new line
}
//stop
