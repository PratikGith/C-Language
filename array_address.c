#include <stdio.h>
void main()
{
	int a[5]={11,12,13,14,15},i;
	int ele=sizeof (a)/sizeof(a[0]);

	for(i=0;i<ele;i++)
		printf("a[%d]=%d\n",i,a[i]);

	printf("Address of 1D-Array\n");
	for(i=0;i<ele;i++)
		printf("a[%d]=%u\n",i,&a[i]);

	printf("Add a : %u\n",a);
	printf("Add a+1 : %u\n",a+1);
	printf("Add &a+1 : %u\n",&a+1);

}
