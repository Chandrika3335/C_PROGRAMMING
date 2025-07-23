#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
typedef struct Student
{
	int roll;
	char name[20];
	float marks;
	struct Student *next;
}SLL;


SLL *add_student(SLL *head)
{
	SLL *newnode;
	newnode = malloc(sizeof(SLL));
	if(newnode == NULL)
	{
	         printf("enter the id:");
		 scanf("%d",&newnode->roll);
		 newnode->next = 0;
		 if(head == NULL)
		 {
			 head = newnode;
		 }
		 return head;
	}
}

void print(SLL *head)
{
	while(head)
	{
		printf("%d", head->roll);
		head = head->next;
	}
}
int main()
{
        SLL *head=NULL;

        char  choice;
        while(1)
        {
                printf("enter the choice:1.ADD 2.Print");
                scanf("%c",&choice);
		__fpurge(stdin);
                switch(choice)
                {
                        case '1': head = add_student(head);
                                break;
                        case '2': print(head);
                                break;
                }
        }
}



		 

		 





