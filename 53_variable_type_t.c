/*
Name            : Harsh Shah
Date            : 06/03/2022
Description     : The user entered number should identified whether its a odd or a even number. Mention its sign too.
Provide a menu to manipulate or display the value of variable of type t
Sample execution: -
Test Case 1:
user@emertxe] ./mem_manager
Menu :
1. Add element
2. Remove element
3. Display element
Choice ---> 1
Enter the type you have to insert:
1. int
2. char
3. float
4. double
Choice ---> 2
Enter the char : k
1. Add element
2. Remove element
3. Display element
4. Exit from the program
Choice ---> 3
-------------------------
0 -> k
-------------------------
1. Add element
2. Remove element
3. Display element
4. Exit from the program
Choice ---> 1
Enter the type you have to insert:
1. int
2. char
3. float
4. double
Choice ---> 1
Enter the int : 10
1. Add element
2. Remove element
3. Display element
4. Exit from the program
Choice ---> 3
------------------------
0 -> k (char)
1 -> 10 (int)
------------------------
1. Add element
2. Remove element
3. Display element
4. Exit from the program
Choice ---> 2
0 -> k
1 -> 10
Enter the index value to be deleted : 0
index 0 successfully deleted.
1. Add element
2. Remove element
3. Display element
4. Exit from the program
Choice ---> 4
*/

//start
#include<stdio.h>										//header files
#include<stdlib.h>										//header files
//declaring different flag variables as static int
static int i_flag, c_flag, s_flag, f_flag, d_flag, count[]={0,1,2,3,4};			
void add_element(void *data, int choice)				//function definition of add element
{
    switch (choice)										//according to choice entered by user switch case works
    {
        case 1:											//if user enters 1st case then int flag gets initialized to 1
             i_flag = 1, f_flag=0, d_flag=0;
             printf("Enter the int : ");
             scanf("\n%d", ((int *)data+4));			//storing integer value from 4th position from 8bytes allocated
             break;

        case 2:										 //if user enters 2nd case then char flag gets initialized to 1
             c_flag = 1, d_flag=0;
             printf("Enter the char : ");
             scanf("\n%c%c", ((char *)data+0), ((char *)data+1));		//storing character from 1st position from 8bytes allocated
             fflush(stdout);
             break;

        case 3:
             s_flag = 1, d_flag=0;					//if user enters 3rd case then initializing short flag to 1
             printf("Enter the short int : ");
             scanf("%hd", ((short *)data+2));		//storing shor int from 2nd position of 8bytes of memory allocated
             break;

        case 4:										//if user enters 4th case then initializing float flag to 1
             f_flag = 1, i_flag=0, d_flag=0;	
             printf("Enter the float : ");
             scanf("%f", ((float *)data+4));		//storing float value from 4th position of 8bytes of memory allocated
             break;

        case 5:										//if user enters 5th case then initializing double flag to 1
             d_flag = 1, i_flag=0, f_flag=0, s_flag=0, c_flag=0;	
             printf("Enter the double : ");			//storing double value in all 8 bytes
             scanf("\n%le", (double *)data);
             break;
    }
}

void display_function(void *data)			//function definition of display function
{
    int m;
    for(m=0;m<25;m++)
        printf("-");
    printf("\n");   
	//printing values according to flag initialized 
    if ( i_flag == 1 )
        printf("[%d] - %d (int)\n", count[0], *((int *)data+4));
    if ( c_flag == 1 )
        printf("[%d] - %c (char)\n", count[1], *((char *)data+0));
    if ( s_flag == 1 )
        printf("[%d] - %d (short int)\n", count[2], *((short *)data+2));
    if ( f_flag == 1 )
        printf("[%d] - %f (float)\n", count[3], *((float *)data+4));
    if ( d_flag == 1 )
        printf("[%d] - %g (double)\n", count[4], *(double *)data);

    for(m=0;m<25;m++)
        printf("-");
    printf("\n");   
}

void Remove_function()							//function definition of removal funciton
{
    int index;
    printf("Enter the index value to be deleted : ");
    scanf("%d", &index);						//reading index from user
    switch (index)
    {
        case 0:								//if user selects oth case then removing integer value and initializing int flag to 0		
            i_flag = 0;
            break;

        case 1:							//if user selects 1st case then removing integer value and initializing char flag to 0  
            c_flag = 0;
            break;

        case 2:							//if user selects 2nd case then removing integer value and initializing short flag to 0  
            s_flag = 0;
            break;

        case 3:							//if user selects 3rd case then removing integer value and initializing float flag to 0  
            f_flag = 0;
            break;

        case 4:							//if user selects 4th case then removing integer value and initializing double flag to 0  
            d_flag = 0;
            break;
    }
    printf("index %d successfully deleted.\n", index);		//printing output as index suzzefully deleted
}

int main()							//main function
{
    int choice;						//initializing choice as int
    void *data = malloc(8);					//dynamically allocating 8 bytes of memory
    while (1)
    {
        printf("Menu :\n1. Add element\n2. Remove element\n3. Display element\n4. Exit from the program\nChoice ---> ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                 printf("Enter the type you have to insert: \n1. int\n2. char\n3. short\n4. float\n5. double\nChoice ---> ");
                 scanf("%d", &choice);				//reading choice from user
                 add_element(data, choice);			//function call of add element	
                 break;

            case 2:
                 display_function(data);			//function call of display function
                 Remove_function();					//function call of remove function
                 break;

            case 3:
                 display_function(data);			//function call of display function
                 break;

            case 4:
                 exit(0);							//to exit from program
                 break;
        }
    }
}
//stop
