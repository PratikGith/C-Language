#include <stdio.h>
void main()
{
	char ch[] = "Hello";
	char ch1[] = {'W','o','r','l','d','\0'};
	int i;
	printf("%s\n",ch);
	for(i=0;i<5;i++)
		printf("%c ",ch1[i]);
	printf("\n");

}
