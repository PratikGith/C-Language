#include <stdio.h>
void main()
{
	int i,j;
	int arr[2][3]={10,20,30,40,50,60};
	int r = sizeof(arr)/sizeof(arr[0]);
	int c = sizeof(arr[0])/sizeof(arr[0][0]);
	
	printf("Number of Rows : %d\n",r);
	printf("Number of Colum : %d\n",c);
	for(i=0;i<r;i++)
	{	
		for(j=0;j<c;j++)
			printf(" array [%d][%d] = %d\n",i,j,arr[i][j]);
	}	
	printf("\n");
	printf("Address of 2D Array \n");
	for(i=0;i<r;i++)
	{	
		for(j=0;j<c;j++)
			printf(" array [%d][%d] = %u\n",i,j,&arr[i][j]);
	}	
	printf("\n_______________________________\nAddress of a   :%u\n",arr);
	printf("Address of a+1 :%u\n",arr+1);
	printf("Address of &a+1:%u\n",&arr+1);

}
