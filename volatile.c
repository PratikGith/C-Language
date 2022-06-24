#include <stdio.h>
void main()
{
	const volatile int i=10;
	int *p= (int *)&i;
	printf("i  = %d\n",i);
	printf("*p = %d\n",*p);
	*p=20;
	printf("new i  = %d\n",i);
//	printf("new p = %d\n",*p);


}
