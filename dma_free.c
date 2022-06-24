#include <stdio.h>
#include <stdlib.h>
void main()
{
	int *p, *q;
	int i,n=5;
	printf("Elements : %d\n",n);

	p=(int *)malloc(n*sizeof(int));
	for(i=0;i<n;i++)
		printf("address of malloc [%d] = %u\n",i,&p[i]);
		printf("\n---------------------------\n");

	q=(int *)calloc(n, sizeof(int));
	for(i=0;i<n;i++)
		printf("address of calloc [%d] = %u\n",i,&q[i]);

	if((p==NULL)||(q==NULL))
	{
		printf("memory is not allocated\n");
		exit(0);
	}
	else
	{
		printf("Memory sucessfully allocated to malloc\n");
		free(p);
		printf("Malloc memory is now freed. =%d\n",p);

		printf("\nMemory sucessfully allocated to calloc\n");
		free(q);
		printf("calloc memory is now freed.=%d\n",q);

	}
		printf("\n END \n");


}
