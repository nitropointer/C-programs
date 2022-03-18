/*
Name            : Harsh Shah
Date            : 21/2/2022
Description     : Check the memory assigning order of variables for checking whether little endian or big endian machine
    			  Little Endian:
           		  --------------
           		  Say int i = 10; gets stored in memory at
           		  1000
                  1001
                  1002
                  1003
           		  where 1000 contains LSB of i and 1003 contains MSB of i
           		  char *ptr = &i; the ptr will now contain 1000

           		  Big Endian:
           		  -----------
           		  Say int i = 10; gets stored in memory at
           		  1000
           		  1001
           		  1002
           		  1003
           		  where 1000 contains MSB of i and 1003 contains LSB of i
           		  char *ptr = &i; the ptr will now contain 1000

				  Read 2 byte or 4 byte data according to given size(short or Int). Swap the bytes and convert the given data to Big Endian 

Input           : Enter the size: 4
			   	  Enter any number in Hexadecimal: 12345678
Output          : After conversion 78563412
*/

//start
#include<stdio.h>												//header files
int main()														//main function
{
	int size,num,i,temp;										//initializing variables
	printf("Enter the size: ");									//reading size from user
	scanf("%d", &size);
	printf("Enter any number in Hexadecimal:");					//reading hexadecimal number from user
	scanf("%x", &num);
	char *ptr = (char*) &num;								//typecasting as char and storing in char pointer to fetch one byte data
	for(i=0;i<size;i++)										//using loop to convert little to big endian
	{
		temp = ptr[size-1];
		ptr[size-1] = ptr[i];
		ptr[i] = temp;
		size--;
	}
	printf("After conversion %X\n", num);					//printing output
}
//stop
