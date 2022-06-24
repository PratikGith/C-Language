#include <stdio.h>
void main()
{
int i;
for(i=0;i<5;i++)
	{
	 int val =10;
//	static int val =10;
	val++;
	printf("Value is '%d': %d \n",i,val);
	}
printf("\nend\n");
}
