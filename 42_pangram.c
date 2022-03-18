/*
Name            : Harsh Shah
Date            : 14/2/2022
Description     : Read a string from the user. Check whether the string is Pangram or not
				  A pangram is a sentence containing every letter in the English Alphabet.
				  Example 1 : "The quick brown fox jumps over the lazy dog ” is a Pangram [Contains all the characters from ‘a’ to ‘z’] 
				  Example 2: “The quick brown fox jumps over the dog” is not a Pangram [Doesn’t contain all the characters from ‘a’ to ‘z’					  , as ‘l’, ‘z’, ‘y’ are missing]
Input           : Enter the string: The quick brown fox jumps over the lazy dog
Output          : The Entered String is a Pangram String
*/

//start
#include <stdio.h>									//header files
int pangram(char *ptr);								//function prototype

int main()											//main function
{
    int i,count;									//initializing i and count
	char str[100];									//initializing string of 100 characters
	printf("Enter the string: ");					//reading string from user
	scanf("%99[^\n]", str);		
	count = pangram(str);							//function call
	if(count == 26)									//if all alphabets are there in a sentence then if condition is true
	{
		printf("The Entered String is a Pangram String\n");		//prints output
	}
	else											//if condition fails then printing else part
	{
		printf("The Entered String is not a Pangram String\n");
	}

}

int pangram(char *ptr)										//function definition
{
	int arr[26] = {0},count = 0,i;							//initializing arr of 26 char and count and i
	int index;												//initializing index as an int
	for(i=0;ptr[i] != '\0'; i++)							//using loop to check all the characters of sentence
	{
		if(ptr[i] >= 'a' && ptr[i] <= 'z') 					//if lowercase char then subtract 'a' to find index
		{
			index = ptr[i] - 'a';
		}
		else if(ptr[i] >= 'A' && ptr[i] <= 'Z')				//if uppercase char then subtract 'A' to find index
		{
			index = ptr[i] - 'A';
		}
		else
			continue;
		
			arr[index] = 1;									//storing index in array as 1
	}
	
	for(i=0;ptr[i] != '\0'; i++)							//using loop to increment count 
	{
		if(arr[i] == 1)
		{
			count++;
		}
	}
	return count;											//returns count
}
//stop
