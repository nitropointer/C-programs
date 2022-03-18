/*
Name            : Harsh Shah 
Date            : 08/02/2022
Description     : Read a string from user.
                  Implement using loops.
                  Do not print character by character.				  
Input           : 1. Enter a string : Hello World
                  2. Enter a string : EMERTXE
Output          : 1. Reverse string is : dlroW olleH
                  2. Reverse string is : EXTREME
*/

//start
#include <stdio.h>

/* Function for calculating string length */
int my_strlen(char *ptr)
{
    int len = 0;
    while(*ptr++)
    {
        len++;
    }
    return len;
}
/* Function for reversing string using Iterative method */
void reverse_iterative(char *str,int i, int len)
{
     char ch;
    for(i = 0; i < len / 2; i++)
    {
        ch = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = ch;
    }
}

int main()
{
    //Declaring the variables
    char str[30];
    int len;
    //reading the string from the user
    printf("Enter a string : ");
    scanf("%[^\n]", str);
    //function call
    len = my_strlen(str);
    reverse_iterative(str,0,len);

    printf("Reversed string is %s\n", str);
}
//stop
