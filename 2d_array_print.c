#include <stdio.h>
void main()
{
	int a[2][4];
	int i,j;
	int row = sizeof(a)/sizeof(a[0]);
	int col = sizeof(a[0])/sizeof(a[0][0]);
	printf("No. of Rows :%d\nNo. of Column :%d\n",row,col);

	printf("Enter the 2x4 Digit Matrix :");
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
			scanf("%d",&a[i][j]);
	printf("print the 2D-Array\n");
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
			printf("Value of 2D array a[%d][%d] = %d\n",i,j,a[i][j]);
	printf("\n");

}
