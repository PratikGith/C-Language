#include <stdio.h>
void print (int *,int,int);
void print1(int (*)[3],int,int);
void main()
{
	int array[2][3];
	int row = sizeof(array)/sizeof (array[0]);
	int col = sizeof(array[0])/sizeof (array[0][0]);
	printf("Enter the 2x3 Matrix :");
	for(int i=0;i<row;i++)
		for(int j=0;j<col;j++)
			scanf("%d",&array[i][j]);
	printf("Value of 2x3 matrix is \n");
	for(int i=0;i<row;i++)
		for(int j=0;j<col;j++)
			printf("array [%d][%d] = %d\n",i,j,array[i][j]);
	print(array,row,col);
	print1(array,row,col);
	printf("\n");


}
void print(int *p, int r, int c)
{
	printf("\n----------------------------\n");
	for(int i=0;i<r*c;i++)
		printf("Array of pointer Matrix is : p[%d] = [%d]\n",i,p[i]);
	printf("\n");

}
void print1(int (*q)[3], int r1, int c1)
{
	printf("\n----------------------------\n");
	for(int i=0;i<r1;i++)
	{	
		for(int j=0;j<c1;j++)
			printf("pointer to Array is q[%d][%d] = [%d]\n",i,j,q[i][j]);
	
		printf("\n");			
	}
}
