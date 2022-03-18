#include<stdio.h>
#include<stdlib.h>
int fragments( int *array , int rows);

int main()
{
	int rows,i,j;
	float sum;
	printf("Enter no of rows: ");
	scanf("%d", &rows);
	int array[rows];
	float *arr[rows];
	int pos[rows];
	for(i=0; i<rows; i++)
	{
		printf("Enter no of columns in row[%d]:", i);
		scanf("%d", &array[i] );
		arr[i] = (int*)malloc(sizeof(float*) * (array[i]+1));
	}
	for(i=0;i<rows;i++)
	{
		printf("Enter %d values for row[%d]: ", array[i],i);
		for(j=0; j< array[i];j++)
		{
			scanf(" %f",&arr[i][j]);
		}
	}
	for(i=0;i<rows;i++)
	{
		sum = 0;
		for(j=0; j<=array[i]; j++)
		{
			sum = sum + arr[i][j];
			if(j==array[i])
			{
				arr[i][j] = sum / array[i];
			}
		}

	}	
	fragments(rows, array);

}

int fragments(int rows, int *array[rows])
{

	int i,j;
	printf("Before Sorting output is:\n");
	for(i=0;i<rows;i++)
	{
		for(j=0; j<=array[i]; j++)
		{
			printf("%f ", arr[i][j]);
		}
		printf("\n");
	}

}
