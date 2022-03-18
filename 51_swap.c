/*
Name            : Harsh Shah
Date            : 28/2/2022
Description     : mplement swap concept with the help of macro
				  The type of arguments to swap will be passed as t
				  swap (int, x, y) where x and y are of types int..
Input           : 1. Int
			      2. char
				  3. short
			      4. float
				  5. double
				  6. string
			      Enter you choice : 1

				  Enter the num1 : 10
				   nter the num2 : 20
Output          : After Swapping :
				  num1 : 20
				  num2 : 10
*/

//start
#include <stdio.h>									//header files
//definition of macro 
//swapping two numbers by storing in temporary variable
#define SWAP(d_t, a, b) \
{						\
d_t temp; temp = a; 			\
a = b; 				 	\
b = temp; 				\
}						\

int main()											//amin function
{
	int n1,n2,i=0,j=0,choice;						//declaring varibales of diff datatypes
	short sh1, sh2;
	float f1,f2;
	double d1,d2;
	char c1,c2,s1[100],s2[100];
	printf("1. int\n2. char\n3. short\n4. float\n5. double\n6. string\n");	//printing different choices
	printf("Enter the choice: ");					//asking user to enter choices
	scanf("%d", &choice);
	switch (choice)									//setting condition using switch case
	{
		case 1:										//if user enters 1 as choice then integers numbers will be swapped
		printf("Enter the num1: ");					//reading two numbrs from user
		scanf("%d", &n1);
		printf("Enter the num2: ");
		scanf("%d", &n2);
		SWAP(int,n1,n2);							//macro function call
		printf("After swapping:\nnum1: %d\nnum2: %d\n", n1, n2);	//printing result after swapping
		break;

		case 2:										//if user enters 2 as choice thne characters will be swapped
		printf("Enter the char1: ");				//reading two chars from user
		getchar();
		scanf("%c", &c1);
		printf("Enter the char2: ");
		getchar();
		scanf("%c", &c2);
		SWAP(char,c1,c2);							//macro function call
		printf("After swapping:\nchar1: %c\nchar2: %c\n", c1, c2);			//printing output after swapping
		break;

		case 3:										//if user enters 3 as choice then swapping short int
		printf("Enter the short1: ");				//reading two short int from user
		scanf("%hi", &sh1);
		printf("Enter the short2: ");
		scanf("%hi", &sh2);
		SWAP(short,sh1,sh2);						//macro function call
		printf("After swapping:\nshort1: %hi\nshort2: %hi\n", sh1, sh2);		//printing output after swapping
		break;

		case 4:										//if user enters 4 as choice then swapping float numbers
		printf("Enter the float value 1: ");		//reading two float numbers from user
		scanf("%f", &f1);
		printf("Enter the float value 2: ");
		scanf("%f", &f2);
		SWAP(float,f1,f2);							//macro function call
		printf("After swapping:\nfloat value1: %f\nfloat value2: %f\n", f1, f2);		//printing output after swapping
		break;

		case 5:										//if user enters 5 as choice then swapping double numbers
		printf("Enter the double value 1: ");		//reading two double numbers from user
		scanf("%lf", &d1);
		printf("Enter the double value 2: ");
		scanf("%lf", &d2);
		SWAP(double,d1,d2);							//macro function call
		printf("After swapping:\ndouble value1: %lf\ndouble value2: %lf\n", d1, d2);		//printing output after swapping
		break;

		case 6:										//if user enters 6 as choice then swapping string
		printf("Enter the string 1: ");				//reading two strings from user
		scanf("%s", s1);
		printf("Enter the string 2: ");
		scanf("%s", s2);
		while(s1[i]!='\0' && s2[i]!='\0')			//using loop to run till string reaches null
		{
			i++;
			SWAP(char, s1[i], s2[i]);				//macro function call
		}
		printf("After swapping:\nstring1: %s\nstring2: %s\n", s1, s2);			//printing output after swapping
		break;
	}
}
//stop
