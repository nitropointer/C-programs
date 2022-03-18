/*
Name            	: Harsh Shah
Date            	: 01/03/2022
Description     	: Treat &x and &x + 1 as characters address.
				  	  Both addresses difference will be sizeof x
Sample Execution	: Size of int : 4 bytes
					  Size of char : 1 byte
					  Size of float : 4 bytes
					  Size of double : 8 bytes
					  Size of unsigned int : 4 bytes
					  Size of long int : 8 bytes
*/

//start
#include<stdio.h>														//header files

//macro definition of sizeof 
#define my_sizeof(type) (char*) (&type+1) - (char*)(&type)    	
int main()															//main function
{
	//initializing variables of diff datatype
	int x;	
	char c;
	float f;
	double d;
	unsigned int u;
	long int l;
	short s;
	char arr[10];
	long long int lli;
	char *ptr;
	
	//printing output as sizeof all datatype
	printf("Size of int: %ld\n", my_sizeof(x));						//sizeof integer
	printf("Size of char: %ld\n", my_sizeof(c));					//sizeof character
	printf("Size of float: %ld\n", my_sizeof(f));					//sizeof float
	printf("Size of double: %ld\n", my_sizeof(d));					//sizeof double
	printf("Size of unsigned int: %ld\n", my_sizeof(u));			//sizeof unsigned int
	printf("Size of long int: %ld\n", my_sizeof(l));				//sizeof long integer
	printf("Size of short int: %ld\n", my_sizeof(s));				//sizeof short int
	printf("Size of array: %ld\n", my_sizeof(arr));					//sizeof array
	printf("Size of long long int: %ld\n", my_sizeof(lli));			//sizeof long long int
	printf("Size of pointer: %ld\n", my_sizeof(ptr));				//sizeof pointer
	return 0;														//terminates program and returns 0 
}
//stop
