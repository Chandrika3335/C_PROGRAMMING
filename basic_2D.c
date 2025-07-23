#include<stdio.h>
int main()
{
	int arr[][4]={{11,22},{33,44,55,66},{77,88,99}};
	int rows,cols;
	int i,j;
	rows=sizeof(arr)/sizeof(*arr);
	cols = sizeof(*arr)/sizeof(**arr);

	//printf("%d %d",rows,cols);
	for(i=0;i<rows;i++,printf("\n"))
	     for(j=0;j<cols;j++)
	          printf("%3d",arr[i][j]);
        printf("\n");

}
