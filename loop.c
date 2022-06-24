#include <stdio.h>
void main()
{
	int i, num;
        i= (sizeof(int)*8-1);
	printf("Enter the choice number :" );
	scanf("%d",&num);

	for(i;i>=0;i--)
	{
		printf("%d",num>>i&1);
	}
	printf("\n");


}
