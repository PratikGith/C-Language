#include <stdio.h>
void bubblesort(int arr[],int);
void print(int arr[], int);
void swap(int *, int *);

void main()
{
	int a[10],i;
	int ele = sizeof(a)/sizeof(a[0]);
	printf("Enter the 10 array elements :");
	for(i=0;i<ele;i++)
	scanf("%d",&a[i]);
	for(i=0;i<ele;i++)
	printf("Print Elements a[%d] = %d\n",i,a[i]);
	bubblesort(a,ele);
	printf("Print Sorted Elements :\n");
	print(a,ele);



}
void bubblesort(int arr[], int n)
{
	int i,j;
	for(i=0;i<n-1;i++)
		for(j=0;j<n-1-i;j++)
			if(arr[j]>arr[j+1])
			{		
				swap(&arr[j],&arr[j+1]);
			}
}
void print(int arr[], int n)
{
	for(int i=0;i<n;i++)
		printf("%d ",arr[i]);
	printf("\n");

}
void swap(int *p, int *q)
{
	int temp = *p;
	*p = *q;
	*q = temp;

}
