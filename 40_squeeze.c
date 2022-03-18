/*
Name            : Harsh Shah
Date            : 09/2/2022
Description     : Read two strings s1 and s2 from user.
				  Remove the characters in s1 that matches with s2.
				  Input string:
				  string 1: Dennis Ritchie
				  string 2: Linux
				  Output String:
				  After squeeze s1: Des Rtche
				  Should not use extra array or the pointer
Input           : Enter s1 : Dennis Ritchie
				  Enter s2 : Linux
Output          : After squeeze s1 : Des Rtche
*/

//start
#include <stdio.h>								//header files
void squeeze(char *str1, char *str2)              //function definition
{
    int i,j=0,k;                                    //initializing i,j,k variable
    for(i=0; str1[i]!= '\0'; i++)               //first loop for string 1
    {   
        for(k=0; str2[k] != '\0'&& (str2[k] != str1[i]); k++);           //second loop for string 2
            if(str2[k] == '\0')
            {
                str1[j++] = str1[i];                    //if condition satisfies then s
            }
    }   
    str1[j] = '\0';
}

int main()										//main function
{
    char str1[100], str2[100];					//defining both strings as an char
    
    printf("Enter string1:");					//reading string 1 from user
    scanf(" %[^\n]", str1);

    printf("Enter string2:");					//reading string 2 from user
    scanf(" %[^\n]", str2);
    
    squeeze(str1, str2);						//function call
    
    printf("After squeeze s1 : %s\n", str1);		//after function call printing output
 	return 0;   								//returns 0 at the end of execution
}
//stop
/*void squeeze(char*str1, char*str2)				//function definition
{
	int i,j=0,k;									//initializing i,j,k variable
	for(i=0; str1[i]!= '\0'; i++)				//first loop for string 1
	{
		for(k=0; str2[k] != '\0'&& (str2[k] != str1[i]); k++)			//second loop for string 2
		{
			if(str2[k] == '\0')
			{
				str1[j++] = str1[i];					//if condition satisfies then s
			}
		}
	}
	str1[k] = '\0';
}
*/
/*void squeeze(char *s1, char *s2)
{
	int i, j, k;
	for (i = 0; s2[i] != '\0'; i++)
	{
		for (j = k = 0; s1[j] != '\0'; j++)
		{
			if (s1[j] != s2[i])
			{
				s1[k++] = s1[j];
			}
		}
	}
	s1[k] = '\0';
}
*/
