#include<stdio.h>
int main()
{
        void *ptr;
	short int i1=520,i2=0;
        float f1=23.4,f2=0.0;
        ptr = &i1;
        i2=*(short int*)ptr;
        ptr = &f1;
        f2=*(float*)ptr;
        printf("i2=%d f2=%f\n",i2,f2);
}
