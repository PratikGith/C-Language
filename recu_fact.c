#include <stdio.h>
int print_fact(int);
void main()
{
	int num, ret;
	printf("Enter the number :");
	scanf("%d",&num);
	ret=print_fact(num);
	printf("\nFactorial = %d\n",ret);


}
int print_fact(int n)
{
	if(n==1)
		return 1;
	if(n>1)
		return (n * print_fact(n-1));

}
