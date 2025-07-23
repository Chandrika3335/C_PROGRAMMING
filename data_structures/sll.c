#include<stdio.h>
#include<stdlib.h>
typedef struct st
{
	int id;
	//char name[20];
	//char mail[20];
	struct st *next;
}SLL;
SLL* add_student(SLL *head)
{
	SLL *temp;
	SLL *newnode = malloc(sizeof(SLL));
	printf("enter the id\n");
	scanf("%d",&newnode -> id);
	newnode->next = 0;
	if(head == NULL)
	{
		head = newnode;
	}
	else
	{
		temp = head;
		while(temp->next)
		{
			temp = head;
			while(temp->next)
			{
				temp = temp->next;
			}
			temp->next = newnode;
		}

	}
	return head;
}

SLL *add_begin(SLL *head)
{
	SLL *newnode = malloc(sizeof(SLL));
	printf("enter the id\n");
	scanf("%d",&newnode->id);
	if(head == NULL)
	{
		newnode->next =0;
		head = newnode;
	}
	return head;
}

void print(SLL *head)
{
	while(head)
	{
		printf("%d",head->id);
		head = head->next;
	}
}

SLL *delete_record(SLL *head)
{
	SLL*temp,*prev;
	int id1;
	printf("enter the id to be delete\n");
	scanf("%d",&id1);
	if(head==NULL)
	{
		printf("no records found\n");
		return head;
	}
	else if(head->id==id1)
	{
	temp=head;
	head=head->next;
	}
	else
	{
		temp=head;
		while((temp)&&(temp->id!=id1))
		{
			prev=temp;
			temp=temp->next;
		}
		if(temp->next)
		prev->next=temp->next;
		else
			prev->next=0;
	}
	free(temp);
	temp=NULL;
	return head;
}







void main()
{
	char ch;
	SLL *head=NULL;
	while(1)
	{
		printf("enter the choice i:insert p:print b:add_begin d:delete_record\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 'i':head= add_student(head);
				 break;
			case 'p':print(head);
				 break;
			case 'b':head=add_begin(head);
				 break;
			case 'd':head = delete_record(head);
				 break;
		}
	}
}


