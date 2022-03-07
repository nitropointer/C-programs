/*
Name            : Harsh Shah
Date            : 18/01/2022
Description     : c-type library functions check whether ch, which must have the value of an unsigned char or EOF, falls into a certain 				  character class according to the current locale.
			  	  isblank() - checks for a blank character; that is, a space or a tab.
Input           : Enter the character: a
Output          : The character 'a' is not a blank character.
*/

//start
#include<stdio.h>							//header files
int my_isblank(int a);					//function prototype

int main()								//returns some integer value at the end of execution
{
    char ch;							//defining ch as an char variable
    int ret;							//defining ret as an int variable

    printf("Enter the character:");			//reading input from user
    scanf("%c", &ch);

    ret = my_isblank(ch);				//function call
	if (ret == 1)						//comparing output which is being returned from function
	{
	printf("Entered character is a blank character\n");		//if condition satisfies then printing if part output
	}
	else															//if condition fails then printing else part output
	{
	printf("Entered character is not blank character\n");	
	}

}

int my_isblank(int a)						//function definition
{
 //refer man ascii to know from space and tab start and set condition accordingly 	
	if ( (a == 9 ) || (a == 32 ))			//setting condition for space and horizontal tab 
		return 1;							//if condition satisfies then returning 1 as output
	else
		return 0;							//if condition fails then returning 0 as an output
}
//stop
