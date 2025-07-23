#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include "Input.c"
#include "Display.c"

#define MAX 100
//mid = (low+high)/2  --> low,mid-->left array,mid+1,high -->right
void Partition(int *,int, int);
void Mergearray(int *,int , int);
int main()
{
	int a[MAX];
	Input(a,MAX);
	Display(a,MAX);
	Partition(a,0,MAX-1);
	printf("elements after sorting\n");
	Display(a,MAX);
}

void Partition(int *p,int low,int high)
{
	int mid;
	if(low<mid)
	{
		mid = (low+high)/2;
		Partition(p,low,mid);
		Partition(p,mid+1,high);
		Mergearray(p,low,mid,high);
	}
}

void Mergearray(int *p,int low,int mid, int high)
{
	int temp[MAX];
	int li,ri,i;
	li=low;
	i=low;
	ri=mid+1;
	while(li<=mid && ri<=high)
	{
		if(p[li]<p[ri])
		{
			temp[i] = p[i];
			li++;
		}
	
	        else
		{
			temp[i]= p[ri];
		        ri++;
	        }
	        i++;
	}
	if(li>mid)
	{
		for(;ri<=high;ri++)
		{
			temp[i] = p[ri];
			i++;
		}

	}
	else
	{
		for(;li<=mid;li++)
		{
			temp[i]=p[li];
			i++;
		}
	}
	/**updating the values from temp array to orginal array**/
	for(i=low;i<=high;i++)
	{
		p[i]=temp[i];
	}
}



