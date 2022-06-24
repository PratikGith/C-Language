#include <stdio.h>
void main()
{
	int i=0,j=0,ele=0,temp=0,a[8];
	ele = sizeof(a)/ sizeof (a[0]) ;

	printf("Enter the number of 8 elements :\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);

	for(i=0;i<ele;i++)
		printf("a[%d] = %d\n",i,a[i]);
		printf("\n");
		printf ("/_____Reverse print_________/\n");
	for(j=ele-1 ; j >=0; j--)
		printf("a[%d] = %d\n",j,a[j]);	

		printf ("/______Reverse the element (Swapping)______/\n");
	for(i=0,j=ele-1; i<j; i++,j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
	for(i=0;i<ele;i++)
		printf("a[%d] = %d\n",i,a[i]);
		printf("\n");
}	
