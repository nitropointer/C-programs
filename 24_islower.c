/*
Name            : Harsh Shah
Date            : 19/01/2022
Description     : c-type library functions check whether ch, which must have the value of an unsigned char or EOF, falls into a certain 				  character class according to the current locale.
				  islower() - checks for a lower case alphabet whether entered character is between 'a' to 'z'.
Input           : Enter the character: a
Output          : Entered character is lower case alphabet
*/

//start
#include<stdio.h>						//header files
int my_islower(int a);					//function prototype

int main()								//returns some int value at the end of execution
{
    char ch;							//defining ch as an char
    int ret;							//defining result as an int value

    printf("Enter the character: ");			//reading input from user
    scanf("%c", &ch);

    ret = my_islower(ch);					//function call
	if (ret == 1)						//comparing with ret and printing output if condition satisfies
	{
	printf("Entered character '%c' is lower case alphabet\n", ch);
	}
	else								//if condition doesnot satisfies then printing else part
	{
	printf("Entered character '%c' is not lower case alphabet\n", ch);
	}

}

int my_islower(int a)					//function definition
{
	
	if ( (a >= 97 ) && (a <= 122 ))			//setting condition to get all lower characters
		return 1;							//if condition satisfies then returning 1 value
	else
		return 0;							//if condition fails then return 0 as an 
}
//stop
