#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#define rows 10
#define cols 4

int main()
{
	int marks[rows][cols];
	int i,j;
	int count = 0;
	srand(getpid());
	//for entering the input at runtime
	for(i=0;i<rows;i++)
		for(j=0;j<cols;j++)
			marks[i][j] = rand()%101;
	
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{

			printf("%4d",marks[i][j]);
		}
	                printf("\n");

	}

	int Total=0;
	for(i=0;i<rows;i++)
	{
		for(j=0;j<cols;j++)
		{
			Total = Total + marks[i][j];
		}
		float per = (Total/400)*100;
		if(per>=70)
		{
			printf("%d\n",i);
		}
	}


		
		      


}


