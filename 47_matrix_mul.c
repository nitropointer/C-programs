/*
Name            : Harsh Shah
Date            : 20/2/2022
Description     : .Read no.of rows and columns for 2 arrays from user and allocate the memory dynamically using malloc or calloc 						  (Assume Matrix A and Matrix B).
				  Read the Matrix A and B from user.
				  Find the product for matrix A with matrix B amd store the result in Matrix R.
				  Let say Name of the matrix is A and no. Of rows = columns = 3.
Input           : Enter number of rows : 3
				  Enter number of columns : 3
				  Enter values for 3 x 3 matrix :
				  1      2      3
				  1      2      3
				  1      2      3
				  Enter number of rows : 3
				  Enter number of columns : 3
				  Enter values for 3 x 3 matrix :
	
				  1      1     1
				  2      2     2
				  3      3     3
Output          : Product of two matrix :
				  14      14      14
				  14      14      14
				  14      14      14
*/

//start
#include<stdio.h>						//header files
#include<stdlib.h>						//header files

//function protoype
int matrix_mul(int **mat_a, int row1, int col1, int **mat_b, int row2, int col2, int **result, int row3, int col3);

int main()								//main function
{
	int row1, col1,i,k,row3;
	int row2, col2,j,l,col3;
    int **mat_a, **mat_b, **result;							//initializing three multilevel pointer for multiplication
	printf("Enter number of rows: ");						//reading first matrix total rows from user
	scanf("%d", &row1);
	printf("Enter number of columns: ");					//reading first matrix total columns from user
	scanf("%d", &col1);
	mat_a =(int**) malloc(row1 * sizeof(int*));			//allocating memory of row dynamicallly
	for(i=0; i<row1; i++)
	{
		mat_a[i] =(int*) malloc(col1 * sizeof(int*));				//allocating memory of column dynamicallly
	}
	printf("Enter values for %d x %d matirx\n", row1, col1);			//reading matirx value from user
	for(i=0; i<row1; i++)
	{
		for(j=0; j<col1; j++)
		{
			scanf("%d", &mat_a[i][j]);
		}
	}
	printf("Enter number of rows: ");						//reading second matrix total row from user
	scanf("%d", &row2);
	printf("Enter number of columns: ");					//reading second matrix total column from user
	scanf("%d", &col2);
	mat_b = (int **)malloc(row2 * sizeof(int*));						//allocating rows memory dynamically
	for(k = 0; k<row2; k++)
	{
		mat_b[k] = (int *)malloc(col2 * sizeof(int*));				//allocating column memory dynamically
	}

	if(col1 != row2)
	{
		printf("Matrix Multiplication is not possible\n");
		exit(1);
	}

	printf("Enter the value for %d x %d matrix\n", row2, col2);				//reading second matrix value from user
	for(k = 0; k<row2; k++)
	{
		for(l = 0; l<col2; l++)
		{
			scanf("%d", &mat_b[k][l]);
		}
	}
	row3 = row1;											//resultant matrix row and column will be same as first and second
	col3 = col2;
	result =(int **) malloc(row3 * sizeof(int*));						//allocating resultant matrix row memory dynamically
	for(i=0; i<row3; i++)
	{
		result[i] =(int *) malloc(col3*sizeof(int*));				//allocating resulatant matrix column memory dynamically
	}
	matrix_mul(mat_a, row1, col1, mat_b, row2, col2, result, row3, col3);		//functon call
	printf("Product of two matrix :\n");					//printing required matrix
	for(i=0;i<row3;i++)
	{
		for(j=0; j<col3; j++)
		{
			printf("%d  ", result[i][j]);
		}
		printf("\n");
	}
	return 0;
}
//function definition
int matrix_mul(int **mat_a, int row1, int col1, int **mat_b, int row2, int col2, int **result, int row3, int col3)
{
	int i,j,k;
	row3=row1;
	col3=col2;
	for(i=0; i<row3;i++)								//first loop to store output in matrix
	{
		for(j=0; j<col3; j++)							//second and third loop to multiply first matrix row to second matrix column
		{
			result[i][j] = 0;							//initializing resultant matrix as zero 
			for(k = 0; k<col1; k++)						
			{
				result[i][j] = result[i][j] + (mat_a[j][k] * mat_b[k][j]); 	// adding output of multiplication to resultant
			}
		}
	}
	return **result;								//returning output 
}
//stop
