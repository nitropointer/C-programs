/*
Name            : Harsh Shah
Date            : 18/01/2022
Description     : c-type library functions check whether ch, which must have the value of an unsigned char or EOF, falls into a certain 				  character class according to the current locale.
				  isalnum() - checks for an alphanumeric character; it is equivalent to (isalpha(c) || isdigit(c)).
Input           : Enter the character: a
Output          : The character 'a' is an alnum character.
*/

//start

#include<stdio.h>						//header files
int my_isalnum(int a);					//function prototype

int main()								//returns some integer value at the end of execution
{
    char ch;							//defining ch variable as char
    int ret;							//defining ret as an int which will print output

    printf("Enter the character: ");		//reading input from user
    scanf("%c", &ch);

    ret = my_isalnum(ch);					//function call
	if (ret == 1)						//comparing output which is being returned from function 
	{
	printf("Entered character is alphanumeric character\n");		//if output is true then printing if part
	}
	else	
	{
	printf("Entered character is not alphanumeric character\n");		//if output is false then printing else part
	}

}

int my_isalnum(int a)						//function definition
{
										//refer man ascii to know from numbers and alphabets start and set condition accordingly		
	if ( ((a >=48) && (a <= 57 )) || ((a >= 65) && (a<=90)) || ((a >= 97) && (a <=122)) )	//setting condition as per requirement
		return 1;							//condition for alnum satisfies then returning 1 as output
	else
		return 0;							//condition for alnum false then returning 0 as an output
}
//stop
