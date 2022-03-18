/*
Name            : Harsh Shah
Date            : 09/02/2022
Description     : Input string:
				  Pointers         are      sharp           knives.
				  Output String:
				  Pointers are sharp knives.
				  Blank can be spaces or tabs. (replace with single space).
Input           : Enter the string with more spaces in between two words
				  Pointers     are               sharp     knives.
Output          : Pointers are sharp knives.
*/

//start
#include<stdio.h>						//header files
#include<string.h>						//string header
void replace_blank(char *str);			//function prototype

int main()								//main function
{
    char str[100];						//defining string with 50 bytes as an  char

    printf("Enter the string with more spaces in between two words\n");			//printing string from user
    scanf("%[^\n]", str); 				

    replace_blank(str);						//function call

    printf("%s\n", str);					//after function call printing output
	return 0;
}

void replace_blank(char *str)					//function definition 
{
	int i=0,j=0;								//defining i and j as an int
	while(str[i] != '\0')
	{
		if(str[i] == ' ' || str[i] == '\t' && str[i+1] == ' ' || str[i+1] != '\t');
			{	
				 str[j] = str[i];					//storing  updated string 
			 	j++;								 //incrementing j
			}
			i++;				//incrementing i
		
	}
	str[j] ='\0';
}

//stop
