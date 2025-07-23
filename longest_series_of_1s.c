#include<stdio.h>
int longest_series_of_ones(int num)
{
    unsigned int number = (unsigned int)num;
    
    int max = 0;
    int count = 0;
    
    for(int i=0;i<32; i++)
    {
        if(number&(1<<i))
        {
            count++;
            if(count > max)
            {
                max = count;
        
            }
        }
        else
        {
            count = 0;
        }
    }
    
    return max;
    
}
int main()
{
    int num;
    scanf("%d",&num);
    
    int result = longest_series_of_ones(num);
    
    if(result == 0)
    {
        printf("no series of ones\n");
    }
    else
    {
        printf("%d",result);
    }
}
