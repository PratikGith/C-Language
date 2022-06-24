#include <stdio.h>
void main()
{
	int i,j;
	char s[20];

	printf("Enter the string :");
	scanf("%s",s);

		printf("Printing String is :");
	for(i=0;s[i]!='\0';i++)
		printf(" %c",s[i]);
	printf("\nReverse the string\n");
	for(i=0;s[i]!='\0';i++);
		for(i=i-1;i>=0;i--)
			printf("s[%d]=%c\n",i,s[i]);
		printf("\n");

}
