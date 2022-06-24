#include <stdio.h>
void main()
{
	int i,j1,j2,m,n,ele,a[6];
	ele = sizeof (a)/ sizeof (a[0]);
	printf("Please enter the 6 elements :");
	for(i=0;i<ele;i++)
		scanf("%d",&a[i]);
	for(i=0;i<ele;i++)
	{	
		printf("a[%d]=%d\n",i,a[i]);
	}
	printf("\n");
//---------------------------------------------------
	m = a[0];
	for(i=0;i<ele;i++)
		if(a[i]>m) {
			m=a[i];
			j1=i;
		}
	printf("Biggest element is : %d, Index is a[%d]\n",m,j1);

	n = a[0];
	for(i=0;i<ele;i++)
		if(a[i]<n){
			n=a[i];
			j2=i;
		}
	printf("Smallest  element is : %d, Index is a[%d]\n",n,j2);

}
