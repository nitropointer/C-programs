/*
Name            : Harsh Shah
Date            : 31/12/2021
Description     : Suppose, in a week let us assume first day is 'Sunday', then second day will be 'Monday' and so on. If first day is   				  'Monday' then the second day will be 'Tuesday' and so on.
Input           : Enter the value of 'n' : 9
			      Choose First Day :
				  1. Sunday
				  2. Monday
				  3. Tuesday
				  4. Wednesday
				  5. Thursday
				  6. Friday
				  7. Saturday
				  Enter the option to set the first day : 2
Output          : the day is Tuesday
*/

//start
#include<stdio.h>					//header file
int main()							//returns some integer value at the end of execution
{
	int n, option, startday;		//defining n,option, startday, N as an integer 
	int N, a, b;
	printf("Enter the value: ");		//reading N value from user
	scanf("%d", &N);
	if ( N>=1 && N<=365)				//setting condition for N value as year has only 365 days
	{
	printf("Choose First Day:\n");		//after entering N value telling user to enter first day
	printf("1. Sunday\n2. Monday\n3. Tuesday\n4. Wednesday\n5. Thursday\n6. Friday\n7. Saturday\n");
	printf("Enter the option to set the first day: ");
	scanf("%d", &startday);
		if ( startday >=1 && startday <= 7)			//setting condition for set day as week has only 7 days
		{
			if ( N == 7 && startday == 1)
			{
				option = N ;
			}
			else if ( (N+startday) % 8 == 0)				//setting different condition for if condition to check for switch case
			{
				option = ((startday - 1) + N  % 7);
			}
			else
			{
				option = (N + (startday - 1)) % 7;
			}

		switch (option)
		{
			case 1:
				printf("the day is Sunday\n");			//option 1 prints sunday as an output
				break;
			case 2:
				printf("the day is Monday\n");			//option 2 prints monday as an output
				break;
			case 3:
				printf("the day is Tuesday\n");			//option 3 prints tuesday as an output
				break;
			case 4:
				printf("the day is Wednesday\n");		//option 4 prints wednesday as an output
				break;
			case 5:
				printf("the day is Thursday\n");		//option 5 prints thursday as an output
				break;
			case 6:
				printf("the day is Friday\n");			//option 6 prints friday as an output
				break;
			case 7:
				printf("the day is Saturday\n");		//option 7 prints saturday as an output
				break;
		}
		}
		else											//if user enter week day as more than 7 then error will be printed
		{
			printf("Error: Invalid input, first day should be > 0 and <= 7\n");
		}
	}
	else												//if user enter N value as more than 365 then error will be printed
	{
		printf("Error: Invalid Input, N value should be > 0 and <= 365");
	}
	return 0;										//returns 0 as an int value
}
//stop
