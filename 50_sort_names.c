/*
Name            : Harsh Shah
Date            : 27/02/2022
Description     : Read the N name from the user
				  Sort it in alphabetical order
				  Use 1st dynamic and 2nd static. Char (*name)[32]
				  No.of names should be dynamic and no.of characters should be static.
				  Allocate the memory dynamically for no.of names.
Input           : Enter the size: 5

			      Enter the 5 names of length max 32 characters in each
			      [0] -> Delhi
				  [1] -> Agra
				  [2] -> Kolkata
				  [3] -> Bengaluru
			      [4] -> Chennai
Output          : The sorted names are:
				  Agra
				  Bengaluru
				  Chennai
				  Delhi
				  Kolkata
*/

//start
#include<stdio.h>											//header file
#include<stdlib.h>											//header file
void sort_names(char (*)[32], int);							//function prototype of sort name function	
int mystrcmp(char *ptr1, char *ptr2);						//function prototype of string comparison
void swap(char *str1, char *str2, int size);				//function prottotype of swap function
int main()													//main function
{
	int size,i,j;											//declaring variables
	printf("Enter the size: ");								//entering size from user
	scanf("%d", &size);
	char (*name)[32];										//allocating rows memory statically which pointer to array
	name = malloc(size *( sizeof(*name)));					//allocating columns dynamically

	//entering names from user using loops
	printf("Enter the %d names of max 32 length character in each\n", size);
	for(i=0; i<size; i++)
	{
		printf("[%d] -> ", i);
		scanf("%s", name[i]);
	}
	sort_names(name, size);    							//function call of sort function
}

void sort_names(char (*name)[32], int size)				//function definition of sort names
{
	int i,j,ret;
	for(i=0; *(name)[i]!='\0';i++)
	{
		for(j=i+1; *(name)[j] != '\0'; j++)
		{
			
		   if(mystrcmp(name[i],name[j] )>0)				//function call of string compare function
		   {	   
					swap(name[i],name[j],32);			//function call of swap function
		   }
		}
	}
	printf("The sorted names are:\n");					//printing sorted names
	for(i=0; i<size; i++)
	{
		printf("%s\n", name[i]);
	}
		
}
int mystrcmp(char *ptr1, char *ptr2)					//function definition of string compare
{
	//comparing all entered strings using loops
	while(*ptr1 != '\0' && *ptr2 != '\0' && *ptr1 == *ptr2)
	{
		*ptr1++;										//incrementing both strings
		*ptr2++;
	}
	if(*ptr1 == *ptr2)									//if both strings are equal then returning 0
		return 0;
	else
		return *ptr1-*ptr2;								//else returning diff between two strings
}


void swap ( char *str1, char *str2, int size)			//function definition of swap function
{
	char temp;
	int i;
	for ( i = 0; i < size; i++ )						//using loop to swap strings after string comparision
    {
    	// temp = * (char *) aptr;
       // * (char *) aptr++ = * (char *) bptr;
       // * (char *) bptr++ = temp;   
		temp = *str1;
		*str1 = *str2;
		*str2 = temp;
		*str1++;
		*str2++;
    }
	
}
		
//stop
