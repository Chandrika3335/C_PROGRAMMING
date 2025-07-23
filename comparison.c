#include<stdio.h>
int main()
{
	int i=20.5;
	float f=20.4;
	int result;
	result= i==f;
	result= i==(int)f;
	result= (float)i==f;
	result= i<f;
	result= i<(int)f;
}
