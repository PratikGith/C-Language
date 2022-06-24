#include <stdio.h>
#include <stdlib.h>
void main()
{
	int i,*p;

//	for(i=0;i<5;i++)
	p=(int *)malloc(5*sizeof(int));

	*(p+0)=10;
	*(p+1)=20;
	*(p+2)=30;
	*(p+3)=40;
	*(p+4)=50;


	for(i=0;i<5;i++)
		printf("p[%d] = %d\n",i,p[i]);



}
