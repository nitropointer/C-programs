/*
Name            : Harsh Shah
Date            : 18/2/2022
Description     : Suppose k = 3 (say taking 3 distinct characters ).
				  Let 3 distinct characters be a , b, c.
				  Suppose ‘n’ is the string length to be formed using ‘k’ distinct words.
				  Let n be 6
				  The string should be formed in such a way that there should not be any consecutive repetitions of the strings.
Input           : Enter the number characters C : 3
				  Enter the Length of the string N : 6
				  Enter 3 distinct characters : a b c
Output          : Possible NRPS is abcbca
*/

//start
#include <stdio.h>												//header files
#include<stdlib.h>
void nrps(char *str, int i, int len);							//function prototype

int main()														//main function
{
	int C,N,i,j;												
	char str[100];												//initializing string array as an char
	printf("Enter the number of characters: ");					//reading number of characters from user
	scanf("%d", &C);
	printf("Enter the length of the string: ");					//reading length of string from user
	scanf("%d", &N);
	printf("Enter the %d distinct characters: " , C);			//reading distinct characters from user
	for(i=0; i<C; i++)											//using loop to read all string characters
	{
		scanf("\n%c", &str[i]);
	}
	for(i=0; i<C; i++)											//using two loop to compare all char
	{
		for(j = i+1; j<C; j++)
		{
			if(str[i] == str[j])								//if two characters are equal then printing error
			{
				printf("Error Please enter distinct characters:\n");
				exit(1);											//terminating program
			}
		}
	}
	nrps(str, N ,C);											//function call
}

void nrps(char *str, int N, int len)							//function definition
{
	int i, var = 0, count = 0;
	for(i=0; i<N; i++)											//using loop to find NRPS
	{
		if(i%len == 0 && i!=0)
		{
			var++;												
		}
		printf("%c", *(str+((i+var)%len)));						//printing output
	}
	printf("\n");											//this is command to print new line
}
//stop
