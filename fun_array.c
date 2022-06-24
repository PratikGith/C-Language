#include <stdio.h>
void print_array(const int *, int);
void main()
{
	int a[10],i,ele;
	ele = sizeof(a)/sizeof(a[0]);

	printf("Enter the Array :");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);

	for(i=0;i<ele;i++)
		printf("a[%d]=%d\n",i,a[i]);
	printf("----------------------------\n");

	print_array(a,ele);
	printf("\n");

}
void print_array(const int *p, int n)
{
	int i;
	for(i=0;i<n;i++)
		printf("p[%d]=%d\n",i,p[i]);

}
