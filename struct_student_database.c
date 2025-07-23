#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 5
typedef struct Student
{
	int roll;
	char name[20];
	float marks;
}STUDENT;

STUDENT DB[MAX];
int cnt=0;
void insert(STUDENT *DB)
{	
	if(cnt==MAX)
	{
        	printf("DB is full\n");

	}
	else
	{
		printf("enter the roll\n");
		scanf("%d",&DB[cnt].roll);
		printf("enter the name\n");
		scanf("%s",DB[cnt].name);
		printf("enter the marks\n");
		scanf("%f",&DB[cnt].marks);
		cnt++;
		printf("Data inserted successfully\n");
	}
}


void print(STUDENT *DB)
{
	int i;
	if(cnt==0)
	{
		printf("DB is Empty\n");
	}
	else
	{
		for(i=0;i<cnt;i++)
		{
			printf("%d %s %f\n",DB[i].roll,DB[i].name,DB[i].marks);
		}
	}
}
STUDENT * find(STUDENT *DB)
{
     /*write logic to find a person in the database */
	if(cnt == 0)
	{
		printf("Database is empty\n");
		return NULL;
	}
	char name[20];
	printf("enter the name\n");
	scanf("%s",name);
	for(int i=0;i<cnt;i++)
	{
		if(strcmp(DB[i].name,name) == 0)
		{
			printf("Found the person having details of %s %d %f",DB[i].name,DB[i].roll,DB[i].marks);
			return &DB[i];
		}

	}
	printf("No person matched with this\n");
	return NULL;
}





void Sort(STUDENT *DB)
{
  /* write logic for sorting based on roll number*/
	if(cnt <= 1)
	{
		printf("Nothing is there to sort\n");
		return;
	}
	for(int i=0;i<cnt;i++)
	{
		for(int j=i+1;j<cnt;j++)
		{
			if(DB[i].roll > DB[j].roll)
			{
				STUDENT temp = DB[i];
			        DB[i] = DB[j];
			        DB[j] = temp;
			}
		}
	}
	printf("Database sorted by roll numbers\n");
}



void Del(STUDENT *DB)
{
    /*delete based on name*/
	/*write logic */
	if(cnt == 0)
	{
		printf("Database is empty\n");
	}
	char name[20];
	printf("enter the name:");
	scanf("%s",name);
	for(int i=0;i<cnt;i++)
		if(strcmp(DB[i].name , name ) == 0)
		{
			for(int j=i; j<cnt - 1;j++)
			{
				DB[j] = DB[j+1];
			}
			cnt--;
			printf("found a record match with name %s\n",name);
			return;
		}
	printf("No record found with the name\n");
}




int main()
{
	STUDENT temp;
	char choice;
	while(1)
	{
		printf("i.insert p.print d.del f.find s.sort e.exit\n");
		printf("enter the choice\n");
		scanf(" %c",&choice);
		switch(choice)
         	{
		case 'i': insert(DB);
			  break;
		case 'p' : print(DB);
			   break;
		case 'f' : find(DB);
			   break;
		case 's' : Sort(DB);
			   break;
		case 'd' : Del(DB);
			   break;
		case 'e': printf("Exitng Program. BYE!");
			  return 0;
                default  : printf("Invalid choice. Please try again.\n");

		}
	}
}






