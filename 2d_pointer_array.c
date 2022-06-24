#include <stdio.h>
void main()
{
	int a[10]={11,22,33,44,55,66,77,88,99,111};
	int i,(*p)[3];
	p=a;
	printf("Print the Array \n");
	for(i=0;i<10;i++)
		printf("a[%d] = %d\n",i,a[i]);
	printf("\n-----------------------------\n");

	printf("  Add of (*p)[0] = %u\n",&(*p)[0]);
	printf("Value of (*p)[0] = %d\n",(*p)[0]);
	printf("  Add of (*p)[1] = %u\n",&(*p)[1]);
	printf("Value of (*p)[1] = %d\n",(*p)[1]);
	printf("  Add of (*p)[2] = %u\n",&(*p)[2]);
	printf("Value of (*p)[2] = %d\n",(*p)[2]);
	printf("\n-----------------------------\n");
	printf("  Add of *(p+1) = %u\n",&*(p+1));
	printf("value of *(p+1) = %d\n",*(*(p+1)));

}
