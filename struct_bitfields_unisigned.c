#include<stdio.h>
struct DOB
{
        unsigned int day:5;
        unsigned int month:5;
        int year;
}var={18,11,2002};
int main()
{
        printf("%lu\n",sizeof(struct DOB));

        printf("%d %d %d\n",var.day,var.month,var.year);
}
