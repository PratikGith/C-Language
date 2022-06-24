#include <stdio.h>
void main()
{
	int i,j,flag1,ele;
	int a[10];
	ele = sizeof (a)/ sizeof (a[0]);
	printf("Enter the 10 elements :\n");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
	for(i=0;i<ele;i++)
		printf("a[%d] = %d\n",i,a[i]);
	printf("prime Number  \n");
	for(i=0,flag1=0;i<ele;i++)
	{
		for(j=2;j<a[i];j++)	
			if(a[i]%j==0)
			break;
	
		if(a[i]==j)
		{
			printf("%d ",a[i]);	
			flag1++;
		}
	}	
	printf("\nCount =%d\n",flag1);

}
