#include<stdio.h>
int main()
{
        int n=4;
        int i,j,k;
        for(i=0; i<=n; i++)
        {
                for(j=0; j<(2 * i); j++)
                {
                        printf(" ");
                }
                for(k=0; k<=(n-i); k++)
                {
                        printf("%c",64+(k+1));
                }
                printf("\n");
        }
}

