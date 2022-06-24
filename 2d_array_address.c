#include <stdio.h>
void main()
{
	int a[2][4]={10,20,30,40,50,60,70,80};
	int i,j;
	int row = sizeof(a)/sizeof(a[0]);
	int col = sizeof(a[0])/sizeof(a[0][0]);
	printf("No. of Rows :%d\nNo. of Column :%d\n",row,col);

	printf("print the 2D-Array address\n");
	for(i=0;i<row;i++)
			printf("Address of 2D array a[%d][%d] = %d\n",i,j,a[i]);
	printf("\n");

}
