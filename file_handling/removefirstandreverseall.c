#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void ReverseStr(char *str,int len)
{
        int i,j;
        char temp;
        for(i=0,j=len-1;i<j;i++,j--)
        {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
        }
}

char * readFromFile(const char *filename)
{
 char *p=NULL;
 FILE *fp;
 fp=fopen(filename,"r");
 if(fp==NULL)
 {
  printf("File not found\n");
  exit(0);
 }
 fseek(fp,0,2);
 long size=ftell(fp)+1;
 fseek(fp,0,0);
 p=calloc(1,size);
 fread(p,size,1,fp);
 p[size-1]='\0';
 fclose(fp);
 return p;
}
char * occurance(char *p,char *sub)
{

        int count=0,l1=strlen(sub);
        char *pos = p;
        while((pos = strstr(pos,sub))!=NULL)
        {
                if(count == 0)
                {
                         memmove(pos,pos+l1,strlen(pos+l1)+1);
                }
                else
                {
                        ReverseStr(pos,l1);
                        pos += l1;
                }
                count++;
        }
        printf("occurrance replaced : %d\n",count);
        return p;
}

void writetofile(char *ptr,char *file)
{
    FILE *fptr;
    int len=strlen(ptr)+1;
    fptr=fopen(file,"w");
    fwrite(ptr,len,1,fptr);


}
int main(int argc,char *argv[])
{
    char *buf=NULL;
   buf=readFromFile(argv[1]);
   occurance(buf,argv[2]);
 writetofile(buf,argv[1]);

}
