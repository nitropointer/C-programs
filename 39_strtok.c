/*
Name            : Harsh Shah
Date            : 12/2/2022
Description     : Read string1 and string2 from user.
				  Call my_strtok (string1, string2);
				  Should treat string2 as delimitter in string1 and should return 1 st field.
				  If you call again my_strtok (NULL, string2), it should return second field in string1 treating string2 as delimitter.
Input           : Enter string1 : Bangalore;;::---Chennai:;Kolkata:;Delhi:-:Mumbai
				  Enter string2 : ;./-:
Output          : Tokens :
				  Bangalore
				  Chennai
			      Kolkata
				  Delhi
			      Mumbai
*/

//start
#include <stdio.h>										//header files
#include <string.h>										//string header
#include <stdio_ext.h>									//stdio_ext header

char *my_strtok(char * str, const char *delim);			//function prototype

int main()
{
    char str[50], delim[50];						//storing char and elim as char
    
    printf("Enter the string  : ");					//reading string from user
    scanf("%s", str);
    
    __fpurge(stdout);								//clear output buffer
 
    printf("Enter the delimeter : ");				//reading delim from user
    scanf("\n%s", delim);
    __fpurge(stdout);								//clears output buffer
    
    char *token = my_strtok(str, delim);			//function call
    printf("Tokens :\n");
    
    while (token)
    {
        printf("%s\n", token);						//printing token
        token = my_strtok(NULL, delim);
    }
}
char *my_strtok(char * str, const char *delim)
{
	static int i;
	int j,k=0;
	static char *ptr;
	if(str != NULL)
		ptr = str;
	while(ptr[i]!= '\0')
	{
		j=0;
		while(delim[j] != '\0')
		{
			if(ptr[i] == delim[i] )
			{
				ptr[i] = '\0';
				i++;
				if(ptr[i] != '\0')
				{
					return &ptr[i];
				}
				else
				{
					i--;
					break;
				}
			}j++;
		}
	i++;
	}
	if(*ptr == '\0')
	{
		return NULL;
	}
	else
	{
	return ptr;
	}
}

char *my_strtok(char * str, const char *delim)
{
    int j = 0;                                                //Declare the function
    static int i;
    static char *temp;
    int length = i;
                                                             //condition checking
    if (str != NULL)
    {
	temp = str;
    }

    while (temp[i] != '\0')									//using loop for string
    {
	j = 0;
	while (delim[j] != '\0')								//using loop for delim
	{

	    if (delim[j] == temp[i])						//checking whethe string is equal to delim
	    {
		temp[i] = '\0';									//storing null
		i++;

		if (temp[length] != '\0')
		{
		    return (&temp[length]);						//returns output
		}
		else
		{
		    length = i;
		    i--;
		    break;
		}
	    }
	    j++;
	}
	i++;
    }

    if (temp[length] == '\0')
    {
	i = 0;
	return NULL;								//return NULL if condition fails
    }
    else
    {
	return (&temp[length]);						//return output to main function
    }
}
//stop
