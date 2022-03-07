/*
Name            : Harsh Shah
Date            : 18/01/2022
Description     : c-type library functions check whether ch, which must have the value of an unsigned char or EOF, falls into a certain 				  character class according to the current locale.
				  ispunct() - checks  for  any  printable character which is not a space or an alphanumeric character.
Input           : Enter the character: a
Output          : Entered character is not punctuation character
*/

//start
#include<stdio.h>							//header files
int my_ispunct(int a);						//function call

int main()									//returns some int value at the end of execution
{
    char ch;								//defining ch as an char value
    int ret;								//defining ret as an int value

    printf("Enter the character: ");			//reading input from user
    scanf("%c", &ch);

    ret = my_ispunct(ch);					//function call
	if (ret == 1)							//comparing ret value with return value
	{
	printf("Entered character is punctuation character\n");		//if condition is true then printing output
	}
	else									//if condition fails then printing else part
	{
	printf("Entered character is not punctuation character\n");
	}
}

int my_ispunct(int a)					//function definition
{
	
	if ( ((a >=33) && (a <= 47 )) || ((a >= 58) && (a<=64)) || ((a >= 91) && (a <=96)) || ((a >= 123) && (a<=126)) )
		return 1;						//if condition is true the return 1
	else
		return 0;						//else return 0
}
//stop
