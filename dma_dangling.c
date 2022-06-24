#include <stdio.h>
#include <stdlib.h>

void main()
{
	int i,*p;
	int a[5]={0};
	printf("Before DMA Address of Pointer : %p\n",p);
	p=(int *)malloc(sizeof(int)*5);
	p=(int *)malloc(sizeof(int)*5);
	for(i=0;i<5;i++)
		scanf("%d",&p[i]);
	for(i=0;i<5;i++)
		printf("a[%d]=%d\n",i,p[i]);
	printf("After Allocating DMA Address of pointer : %p\n",p);
	free(p);
	printf("After freeing a DMA Address of pointer : %p\n",p);
	for(i=0;i<5;i++)
		printf("a[%d] = %d\n",i,p[i]);

}
