#include <stdio.h>
#include <stdlib.h>
void main()
{
	int i=0,j=0,r=0,c=0;
	int **b;
	printf("Enter the Number of Raws :");
	scanf("%d",&r);
	printf("\nEnter the number of Column : ");
	scanf("%d",&c);
	
	b=(int **)malloc(sizeof(int *)*r);
	printf("\n\nDynamic memory is allocated to Raw\n");
	
	for(i=0;i<r;i++)
		b[i]=(int *)malloc(sizeof (int )*c);
	printf("Dynamic memory is allocated to Column\n");
	
	printf("\nEnter the Row * Col number for Matrix :");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			scanf("%d",&b[i][j]);
	}
	printf("Print the rxc matrix\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("DMA allocated Matrix [%d][%d] = %d\n",i,j,b[i][j]);
		printf("\n");
	}	
	printf("\n-----------------------------------------\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
			printf("%d ",b[i][j]);
		printf("\n");
	}	
}
