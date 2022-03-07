/*
Name            : Harsh Shah
Date            : 1/2/2022
Description     : Read characters from user till EOF
				  If EOF received, print the character count, word count, and line count.
				  Code should exactly work like wc command.
Input           : Hello world
				  Dennis Ritchie
				  Linux
Output          : Character count : 33
				  Line count : 3
				  Word count : 5
*/

//start
#include<stdio.h>					//header file
int main()							//main function
{
	char ch, option;				//defining ch, option and line character word as an character
	char ch_count = 0, w_count = 0, l_count = 0;
	do
	{
		while((ch = getc(stdin))!=EOF)				//using while loop to set condition until ch is not reached EOF 
		{
			ch_count++;								//incrementing character count variable 
			if( ch == '\n')						//set condition to increment line count variable
			{
			 	l_count++;						//incrementing line count variable
			}
			if((ch == '\t') ||( ch == '\n')|| (ch == 32))			//set condition to increment word count variable
		//	if(!((ch>='a' && ch<='z')||(ch>='A'&&ch<='Z')||ch == 32))
			{
				w_count++;						//incrementing word count variable
			}
		}
	printf("Character count: %d\n ", ch_count);			//printing character count 
	printf("Line count: %d\n ", l_count);				//printing line count
	printf("Word count: %d\n ", w_count);				//printing word count
	printf("Do you want to continue(y/Y):");
	scanf("%c", &option);
	getchar();
	}
	while(option == 'y');
	return 0;									//returns 0 at the end of execution to check program is terminated or not
}
//stop
