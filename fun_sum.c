#include<stdio.h>
int sum(int,int);
void main()
{
	int ret,n1,n2;
	printf("Enter the First number :");
	scanf("%d",&n1);
	printf("Enter the Second number :");
	scanf("%d",&n2);

	ret = sum(n1,n2);
	printf("Sum = %d\n",ret);

}
int sum (int num1, int num2)
{
	int add;
	add = num1 + num2;
	return add;
}
