#include <stdio.h>
void main()
{
	int i=0,ele=0,a[5];
	ele = sizeof(a)/ sizeof (a[0]) ;

	printf("Enter the elements \n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);

	for(i=0;i<ele;i++)
//		printf("a[%d] = %d\n",i,a[i]);
		printf("\n");

}
