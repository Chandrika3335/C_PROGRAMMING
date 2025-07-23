#include "merge_sort.c"
void Input(int *p,int MAX)
{
	for(int i=0;i<MAX; i++)
	{
		p[i] = rand()%7+1;
	}
}
void Display(int *p,int MAX)
{
	for(int i=0;i<MAX;i++)
	{
		printf("%d",p[i]);
	}
}






