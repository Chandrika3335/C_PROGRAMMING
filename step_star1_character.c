#include<stdio.h>
int main()
{
        int n=3;
        int i,j,k,A;
        for(i=-n; i<=n; i++)
        {

                if(i<0)
                {
                        A = -i;
                }
                else
                {
                        A = i;
                }
                for(j=1;j<=((n-A)+1);j++)
                {
                        printf("%c",64+j);
                }
                printf("\n");
        }
}

