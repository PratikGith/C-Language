#include <stdio.h>
void print(int *,int,int);
void print_2d(int (*)[3],int,int);

void main()
{
	int a[2][3]={10,20,30,40,50,60};
	int row = sizeof(a)/sizeof(a[0]);
	int col = sizeof(a[0])/sizeof(a[0][0]);

	print(a,row,col);
	print_2d(a,row,col);
	printf("\n");
}
void print(int *p,int r,int c)
{
	int i;
	printf("2D Array is \n");
	for(i=0;i<r*c;i++)
	{	
		printf("%d ",p[i]);
	}
	printf("\n");
}	
void print_2d(int (*q)[3],int r,int c)
{
	int i,j;
	printf("\n----------------------\n2D Array \n");
	for(i=0;i<r;i++)
	{	
		for(j=0;j<c;j++)
			printf("%d ",q[i][j]);
	printf("\n");
	}
}
