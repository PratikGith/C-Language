#include <stdio.h>
void main()
{
	int i=10,j=23,k=40;
	int *p[3];
	p[0]= &i;
	p[1]=&j;
	p[2]=&k;

	printf("p[0]=%d\n",*p[0]);
	printf("p[1]=%d\n",*p[1]);
	printf("p[2]=%d\n",*p[2]);


}
