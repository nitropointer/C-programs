/*
Name            : Harsh Shah
Date            : 13/2/2022
Description     : int itoa(int n, char *s)
				  Convert integer n into a string and store the string in s.
				  Return the length of string from the function.
Input           : Enter the number : 1234
Output          : Integer to string is 1234
*/

//start
#include <stdio.h> 								//header files
int itoa(int num, char *str);					//function prototype

int main()										//main function
{
    int num,ret;								//defining num , ret as an int 
    char str[10];								//taking string as an char allocatng 10 bytes
    
    printf("Enter the number: ");				//reading num from user
    ret = scanf("%d", &num);					//storing num in ret variable
    
    itoa(num, str);								//funciton call
	if(ret == 0)								//condition to check for ret variable
	{
   		 printf("Integer to string is %d\n", ret);		//prinitng output as zero
	}
	else
	{
        printf("Integer to string is %s\n", str);			//printing output as string if condiiton fails
	}
	return 0;
}
int itoa(int num, char *str)                    //function definition
{
   int j,i,temp;		    				//initialiazing number and flag variable                                                    
	if(num>0)								//seting condition if number is greater than zero
	{
		for (i=0; num>0; i++)				//using loop to convert number to string it will be in reverse
		{
			str[i] = (num%10) + '0';			//convert num to string
			num = num/10;
		}
			str[i] = '\0';
	
		for(j=0,i--;j<i;j++,i--)					//using second loop to get original number from reverse order
		{
			temp = str[i];
			str[i] = str[j];
			str[j] = temp;
		}
	}
	if(num<0)									//setting condition if number is less than zero
	{
		num = -num;
		str[0] = '-';							//storing - sign as an fisrt element of string
		for (i=1; num!=0; i++)					//using first loop to convert num to string in reverse order
		{
			str[i] = (num%10) + '0';			//convert num to string
			num = num/10;
		}
			str[i] = '\0';
	
		for(j=1,i--;j<i;j++,i--)				//using second loop to get number in original form
		{
			temp = str[i];
			str[i] = str[j];
			str[j] = temp;
		}
	}
    return *str ;                         //turns output to int function
}
//stop
