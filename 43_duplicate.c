/*
Name            : Harsh Shah
Date            : 12/02/2022
Description     : Read size and elements into the array. After reading the input, you need to pass array to the function. In function, you need to remove duplicates/copy non-duplicate elements into new array.
Input           : Read size and elements into the array
Output          : Enter the size: 5

   Enter elements into the array: 5 1 3 1 5

After removing duplicates: 5 1 31
*/

//start
#include <stdio.h>  
int main ()  
{  
    // declare local variables   
    int arr[20], i, j, k, size;  
      
    printf ("Enter the size: ");  
    scanf (" %d", &size);  
      
    printf ("Enter elements into the array: \n ", size);  
    // use for loop to enter the elements one by one in an array  
    for ( i = 0; i < size; i++)  
    {  
        scanf (" %d", &arr[i]);  
    }  
      
      
    // use nested for loop to find the duplicate elements in array  
    for ( i = 0; i < size; i ++)  
    {  
        for ( j = i + 1; j < size; j++)  
        {  
            // use if statement to check duplicate element  
            if ( arr[i] == arr[j])  
            {  
                // delete the current position of the duplicate element  
                for ( k = j; k < size - 1; k++)  
                {  
                    arr[k] = arr [k + 1];  
                }  
                // decrease the size of array after removing duplicate element  
                size--;  
                  
            // if the position of the elements is changes, don't increase the index j  
                j--;      
            }  
        }  
    }  
      
      
    /* display an array after deletion or removing of the duplicate elements */  
    printf ("\n After removing duplicates: ");  
      
    // for loop to print the array  
    for ( i = 0; i < size; i++)  
    {  
        printf (" %d ", arr[i]);  
    }  
    return 0;  
} 
//stop
