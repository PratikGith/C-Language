#include<stdio.h>
void main()
{
	int i=10,j=20,k=30;
	int *p[3];

	p[0]=&i;
	p[1]=&j;
	p[2]=&k;

	printf("Add of p[0]=%d\nAdd of p[1]=%d\nAdd of p[2]=%d\n",p[0],p[1],p[2]);
	printf("\n-----------------------------------------\n");
	printf("Value of p[0]=%d\nValue of p[1]=%d\nValue of p[2]=%d\n",*p[0],*p[1],*p[2]);

}
