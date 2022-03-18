#include <stdio.h>
#include <stdlib.h>

int fragments(int rows, int *array) 
{
	int j;
    float *arr[rows];

    for (int i = 0; i < rows; i++)
   	{
        arr[i] = malloc(sizeof(float) * (array[i] + 1));
        printf("Enter %d values for row[%d]: ", array[i], i);
        for (int j = 0; j < array[i]; j++)
	   	{
            scanf("%f", &arr[i][j]); 
        }
    }
    printf("Before Sorting output is:\n");
    for (int i = 0; i < rows; i++)
   	{
        float sum = 0;
        for (j = 0; j < array[i]; j++)
	   	{
            printf("%f ", arr[i][j]);
            sum += arr[i][j];
        }
        printf("%f\n", arr[i][j] = sum / j);
    }
    for (int i = 0; i < rows - 1; i++)
   	{
        for (int j = 0; j < rows - i - 1; j++) 
		{
            if (arr[j][array[j]] > arr[j+1][array[j+1]])
		   	{
                float *temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                int temp1 = array[j];
                array[j] = array[j+1];
                array[j+1] = temp1;
            }
        }
    }
    for (int i = 0; i < rows; i++)
   	{
        for (int j = 0; j < array[i] + 1; j++) 
		{
            printf("%f ", arr[i][j]);
        }
        printf("\n");
    }
    for (int i = 0; i < rows; i++) 
	{
        free(arr[i]);
    }
}

int main() 
{
    int rows;
    printf("Enter no of rows: ");
    if (scanf("%d", &rows) != 1)
        return 1;
    int array[rows];
    for (int i = 0; i < rows; i++)
   	{
        printf("Enter no of columns in row[%d]:", i);
       scanf("%d", &array[i]); 
    }
    fragments(rows, array);
    return 0;
}
