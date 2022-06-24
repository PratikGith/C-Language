#include <stdio.h>
void main()
{
	int i,j,ele,temp;
	int a[9];
	ele = sizeof (a)/sizeof (a[0]);
	printf("Enter the 9 elements \n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
	for(i=0;i<ele;i++)
		printf("a[%d] = %d\n",i,a[i]);
	
	printf("Selection short\n");
	for(i=0;i<ele;i++)
	{
		for(j=i+1;j<=ele-1;j++)
			if(a[i]>a[j])
			{
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			
			}
	
	}
	for(i=0;i<ele;i++)
		printf("a[%d] = %d\n",i,a[i]);

}
