#include <stdio.h>
void main()
{
	int i=7,j=0, num;
	printf("Enter the choice number :" );
	scanf("%d",&num);

	for(i;i>=0;i--)
	{
		j=num>> i&1;
		printf("%d\n",j);
	}
	printf("\n");


}
