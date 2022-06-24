#include <stdio.h>
void main()
{
	int a[7], i,j,ele,temp;
	ele = sizeof (a)/ sizeof (a[0]);
	printf("Please, Enter the 7 elements\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
	for(i=0;i<ele;i++)
		printf("a[%d] = %d\n",i,a[i]);

	printf("Bubble short Method\n");
	for(i=0;i<ele-1;i++)
	{
		for(j=0;j<ele-1-i;j++)
			if(a[j]>a[j+1])
			{
				temp = a[j];
				a[j] = a[j+1];
				a[j+1] = temp;
			
			}
	
	}
	for(i=0;i<ele;i++)
		printf("a[%d] = %d\n",i,a[i]);

}
