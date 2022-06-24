#include <stdio.h>
void print_binary(int);

void main()
{
	int number;
	printf("Enter the Number :");
	scanf("%d",&number);

	print_binary(number);
	printf("End \n");
}

void print_binary(int n)
{
	int i;
	for(i=31;i>=0;i--)
		printf("%d",n>>i&1);
	printf("\n");

}
