#include <stdio.h>
void swap(int* ,int*);
void main()
{
	int  n1=10,n2=20;
	printf("Before N1=%d N2=%d\n",n1,n2);
	swap(&n1,&n2);
	printf("After N1=%d N2=%d\n",n1,n2);
}
void swap(int*num1,int *num2)
{
	int temp;
	temp = *num1;
	*num1 = *num2;
	*num2 = temp;

	printf("Inside swap function N1 = %d,N2 = %d\n",*num1,*num2);

}
