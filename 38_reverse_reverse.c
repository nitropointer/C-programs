/*
Name            : Harsh Shah 
Date            : 08/02/2022
Description     : Read a string from user.
                  Implement using recursive function without using any loops
                  Do not print character by character.				  
Input           : 1. Enter a string : Hello World
                  2. Enter a string : EMERTXE
Output          : 1. Reverse string is : dlroW olleH
                  2. Reverse string is : EXTREME
*/

//start
#include <stdio.h>									//header files

int my_strlen(char *ptr)							//function definition
{
    int len = 0;									//defining len as int
    while(*ptr++)
    {
        len++;										//using loop to calculate string length
    }
    return len;
}

void  reverse_recursive(char *str,int i, int len)			//function definition
    
{
    char ch;											//defining ch as an char
      if (i < len)										//setting condition
    {
        ch = *(str + i);								//reversing string
        *(str + i) = *(str + len);
        *(str + len) = ch;
         reverse_recursive(str, ++i, --len);			//recursive function call
    }
}

int main()
{
    
    char str[30];						//declaring variables
    int len;
    printf("Enter any string : ");						//reading string from user
    scanf("%[^\n]", str);
    //function call
    len = my_strlen(str);
    reverse_recursive(str,0,len-1);

    printf("Reversed string is %s\n", str);					//printing output
}
//stop
