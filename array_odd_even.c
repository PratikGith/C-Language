#include <stdio.h>
void main()
{
	int i=0,j=0,flag1=0,flag2=0,ele=0;
	int a[10];
	ele = sizeof (a)/ sizeof (a[0]);
	printf("Enter the 10 elements :\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
	for(i=0;i<ele;i++)
		printf("a[%d] = %d\n",i,a[i]);
	printf("odd and even \n");

	for(i=0,flag1,flag2;i<ele;i++)
	{
		if(a[i]%2==0)
		{
			flag1++;
		}else
			flag2++;
		}	
		
		printf("Count Even = %d ",flag1);
		printf("Count Odd = %d\n", flag2);

}
