Count the no of palindromes in the given string#include<stdio.h>
#include<string.h>

int ispalindrome(char *word)
{
    int len=strlen(word);
    int j=len-1;
     
     //where i=indexes from starting ,j=indexes from ending. 
    for(int i=0 ; i<j ; i++ ,j--)
    {
        if(word[i] != word[j])
        {
            return 0; //not matched
        }
        
    }
    return 1;
}
int main()
{
    char str[100]; 
    char *word;
    int count;
    printf("enter a string:\n");
    
    fgets(str,100,stdin);
    if(str[strlen(str)-1]=='\n')
        str[strlen(str)-1]='\0';
        
    word=strtok(str," ");
   
    printf("The palindromes are :\n");
    
    while(word != NULL)
    {
        if(ispalindrome(word))
        {
            printf("%s\n",word);
            count++;
        }
       
         word=strtok(NULL, " ");
    }
      
    printf("\n no.of palindromes are : %d\n",count);    
}//main
