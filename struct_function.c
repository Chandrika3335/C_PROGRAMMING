#include<stdio.h>
struct student 
{
	char name[20];
	int roll;
};
struct student Input(struct student S)
{
	printf("enter the name\n");
	fgets(S.name,20,stdin);
	printf("enter the roll\n");
	scanf("%d",&S.roll);
	return S;
}
void print(struct student S)
{
	printf("%s %d\n",S.name,S.roll);
}
int main()
{
	struct student S;
	S=Input(S);
	print(S);


}
