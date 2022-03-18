#include<stdio.h>
#include<stdlib.h>
struct student
{
	int roll_no;
	char name[50];
	int *marks;
};

int my_strcmp(char *str1, char *str2)
{
	    while ( (*str1 && *str2) && (*str1 == *str2) || (*str1 - 32 == *str2) || (*str1 == *str2 - 32) )
  	{
		str1++;
		str2++;
	}
	return *str2-*str1;
}

char grade(float avg)
{
	if(avg>=90)
	{
		return 'A';
	}
	else if(avg>=80 && avg<90)
	{
		return 'B';
	}
	else if(avg>=65 && avg<80)
	{
		return 'C';
	}
	else if(avg>=50 && avg<65)
	{
		return 'D';
	}
	else if(avg>=35 && avg <50)
	{
		return 'E';
	}
	else
		return 'F';
}
int main()
{
	int num=0, n=0,i,m,j,choice,l=0;
	char (*sub)[50];
	float sum = 0,avg=0;
	char c1;
	printf("Enter no. of students: ");
	scanf("%d", &num);
	printf("Enter no. of subjects: ");
	scanf("%d", &n);
	sub = malloc(sizeof(*sub) * n);
	struct student s[num];
	for(i=0; i<n; i++)
	{
		printf("Enter the name of subject %d: ",i+1);
		scanf("%s", sub[i]);
	}

	for(i=0;i<num;i++)
	{
		printf("-------------------------Enter students details--------------------\n");
		printf("Enter the student %d Roll no.: ", i+1);
		scanf("%d", &s[i].roll_no);
		printf("Enter the student %d name: ",i+1);
		scanf("%s", s[i].name);
		s[i].marks = (int*)malloc(sizeof(int) * n);
		for(j=0;j<n;j++)
		{
			printf("Enter the %s marks: ",sub[j]);
			scanf("%d", &s[i].marks[j]);
		} 
	}

	do
	{
		printf("-----------------------DISPLAY MENU-----------------------------\n");
		printf("1.All students details\n2.Particular student detals\n");
		printf("Enter your choice:");
		scanf("%d", &choice);

		switch(choice)
		{
			case 1:
				printf("Menu for All Student Details\n");
				printf("Roll No.\tName\t\t");
				for(j=0;j<n;j++)
				{
					printf("%s\t\t", sub[j]);
				}
				printf("Average\t\tGrade\n");
				for(i=0;i<num;i++)
				{
					sum = 0;
					for(j=0;j<n;j++)
					{
						sum = sum + s[i].marks[j];
					}
					printf("%d\t\t%s\t\t", s[i].roll_no,s[i].name);
					for(j=0;j<n;j++)
					{
						printf("%d\t\t", s[i].marks[j]);
					}
					avg = sum/n;
					printf("%g\t\t%c\n",avg,grade(avg));
				}
				break;
			case 2:
			{
				 printf("-----------------------Menu for particular student--------------------\n");
				printf("1. Name\n2. Roll no\nEnter your choice: ");
				scanf("%d", &choice);
				if(choice == 1)
				{
					char student_name[50];
					printf("Enter the name of the student :");
			   	scanf("%s", student_name);	
			   	int count =0;
			   	avg=0;
			   	sum=0;
			   	for(i=0;i<num;i++)
			   	{
				 	  if(my_strcmp(student_name, s[i].name) == 0)
				   	{
					 	  count++;
					   	printf("Roll No.\tName\t\t");
					   	for(j=0;j<n;j++)
					   	{
							   printf("%s\t\t", sub[j]);
						   	sum = sum+s[i].marks[j];
					  	 }
					   	avg=sum/n;
					   	printf("Average\t\tGrade\n");
					   	printf("%d\t\t%s\t\t",s[i].roll_no,s[i].name);
					   	for(j=0;j<n;j++)
					   	{
							   printf("%d\t\t", s[i].marks[j]);
					   	}
					   	printf("%g\t\t%c\n", avg, grade(avg));
				   
				  	 }	
			  	 }
			   	if(count==0)
			  	 {
					   printf("%s student detail is not available\n", student_name);
			   	}
			 }
				else if(choice==2)
				{
					int number;
					printf("Enter the roll no of student: ");
					scanf("%d", &number);
					sum=0;
					avg=0;
					for(i=0;i<num;i++)
					{
						if(number==s[i].roll_no)
						{
					   	printf("Roll No.\tName\t\t");
					   	for(j=0;j<n;j++)
					   	{
						 	  printf("%s\t\t", sub[j]);
						 	  sum = sum+s[i].marks[j];
					   	}
					   	avg=sum/n;
					   	printf("Average\t\tGrade\n");
					   	printf("%d\t\t%s\t\t",s[i].roll_no,s[i].name);
					   	for(j=0;j<n;j++)
					   	{
							   printf("%d\t\t", s[i].marks[j]);
					   	}
					   	printf("%g\t\t%c\n", avg, grade(avg));
						}
					}
				}
				else
					printf("Please enter valid option\n");
				break;
			}
			default:
					printf("Error : Invalid choice \n");
                	break;
		}
		printf("Do you want to continue:(Y/N)");
		getchar();
		scanf("%c", &c1);
	}while(c1=='Y' || c1 == 'y');
	free(sub);
	return 0;
}
