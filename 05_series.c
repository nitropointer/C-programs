/*
Name            : Harsh Shah
Date            : 19/12/2021
Description     : AP :
				  In mathematics, an arithmetic progression (AP) or arithmetic sequence is a sequence of numbers such that the differenc				  e between the consecutive terms is constant.
				  For instance, the sequence 5, 7, 9, 11, 13, 15 ... is an arithmetic progression with common difference of 2.
				  GP :
				  In mathematics, a geometric progression, also known as a geometric sequence, is a sequence of numbers where each term 				  after the first is found by multiplying the previous one by a fixed, non-zero number called the common ratio.         
				  For example, the sequence 2, 6, 18, 54, ... is a geometric progression with common ratio 3. Similarly 10, 5, 2.5, 1.25				  , ... is a geometric sequence with common ratio 1/2.
				  HP :
 				  In mathematics, a harmonic progression (or harmonic sequence) is a progression formed by taking the reciprocals of an 				  arithmetic progression.
Input           : user@emertxe] ./progressions
				  Enter the First Number 'A': 2
				  Enter the Common Difference / Ratio 'R': 3
				  Enter the number of terms 'N': 5
Output          : AP = 2, 5, 8, 11, 14
				  GP = 2, 6, 18, 54, 162
				  HP = 0.500000, 0.200000, 0.125000, 0.0909091, 0.0714285
*/

#include<stdio.h>					//header file
int main()							//returns some integer value at the end of execution
{
	int A=0, R=0, N=0;				//defining A R n AP GP i as an int value
	int AP, GP, i;
	float HP;						//defining HP as an float
	printf("Enter the first number 'A': ");			//reading first number from user
	scanf("%d", &A);
	printf("Enter the common diff/ratio 'R': ");	//reading common diff/ratio from user
	scanf("%d", &R);
	printf("Enter the number of terms 'N': ");		//reading number of terms from user
	scanf("%d", &N);
	AP = A;							//storing first number in AP series
	GP = A;							//storing first number in GP series
	if(A>0 && R>0 && N>0)
	{
		printf("AP = ");
		for(i=1; i<=N; i++)			//using for loop to find AP series
		{
			printf("%d, ", AP);		//printing AP series
			AP = AP + R;
		}
		printf("\n");

		printf("GP = ");
		for(i=1; i<=N; i++)			//using for loop to find GP series
		{
			printf("%d, ", GP);		//printing GP series
			GP = GP * R;
		}
		printf("\n");

		printf("HP = ");
		for(i=1; i<=N; i++)			//using for loop to find HP series
		{
			
			 HP = (float) 1 / A;		//printing HP series
			 A = A + R;
			printf("%f, ", HP);
		}
		printf("\n");
	}
	else							//if negative number is entered then error will be printed
	{
		printf("Invalid input\n");
	}
	return 0;						//return 0 value as int
}
//stop
