#include <stdio.h>

int print_binary(int);
void main()
{
	int ret,number;
	printf("Enter the number :");
	scanf("%d",&number);

	ret = print_binary(number);
	printf("\n----------------------------------------------\nCount the Set bit :%d\n",ret);

}
int print_binary (int num)
{
	int i,c;
	for(i=31;i>=0;i--)
		if(num&1<<i)
		{
			printf("1");
			c++;
		}
		else
			printf("0");
	return c;

}
