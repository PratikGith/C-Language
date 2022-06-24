#include <stdio.h>
int *abc(void );
void main()
{
	int *p;
	p=abc();
	printf("Hi\n");
	printf("%d\n",*p);
	printf("End\n");

}
int *abc(void)
{
	int i=10;
	printf("abc Function\n");
	return &i;

}
