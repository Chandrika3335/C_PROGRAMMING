#include<stdio.h>
#include<stdlib.h>

typedef struct st
{
	int id;
	struct st *next;
}SLL;

SLL *add_student(SLL *head)
{
	SLL *temp=NULL;
	SLL *newnode = malloc(sizeof(SLL));
	if(newnode == NULL)
	{
		printf("node is not created\n");
		exit(0);
	}
        
	printf("enter the id\n");
		__fpurge(stdin);
	scanf("%d",&newnode->id);
	if(head==NULL)
	{
		head = newnode;
	}
	else
	{
		temp = head;
		while(temp->next)
	        {
			temp = temp->next;
		}
		temp->next = newnode;

        }
	return head;
}
void print(SLL *head)
{
	while(head)
	{
		printf("%d\t",head->id);
		head = head->next;
	}
}


void main()
{
	char ch;
	SLL *head=NULL;
	while(1)
	{
	        __fpurge(stdin);
		printf("enter the choice i:insert,p:print\n");
		scanf("%c",&ch);
		__fpurge(stdin);
		switch(ch)
		{
			case 'i':head=add_student(head);
				 break;
			case 'p':print(head);
				 break;
			default:
				 break;
		}
	}
}

