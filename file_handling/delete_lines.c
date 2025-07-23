#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int cnt;
void * readFromFile(char *filename)
{
	char (*p)[100]=NULL;
	char str[100];
	FILE *fp;
	fp=fopen(filename,"r");
	if(fp==NULL)
	{
		printf("%s is not found\n",filename);
		exit(0);
	}
	while(fgets(str,100,fp))
	{
		p=realloc(p,(cnt+1)*sizeof(*p));
		strcpy(p[cnt],str);
		cnt++;
	}
	fclose(fp);
	return p;
}

void * DelLine(char (*lines)[100],int index)
{
	
	if((index < 0)|| (index >=cnt))
	{
		printf("Invalid line no\n");
		exit(0);
	}
	memmove(lines+index,lines+index+1,(cnt-index-1)*sizeof(*lines));
	cnt--;
	lines=realloc(lines,cnt*sizeof(*lines));
	return lines;

}
void writeToFile(char (*lines)[100],char *filename)
{
	FILE *fp;
	int i;
	fp=fopen(filename,"w");
	for(i=0;i<cnt;i++)
	{
		fputs(lines[i],fp);
	}
	fclose(fp);

}
int main(int argc, char *argv[])
{	char (*lines)[100];
	if(argc!=3)
	{
		printf("incorrect inputs\n");
		printf("exe filename lineno\n");
		exit(0);
	}
	lines=readFromFile(argv[1]);
	lines=DelLine(lines,atoi(argv[2])-1);
	writeToFile(lines,argv[1]);
}

