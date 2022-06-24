#include <stdio.h>
void main()
{
	int i;
	char s[10];
	printf("Enter the string : ");
	scanf("%s",s);

	printf("Print the String char by char :");
	for(i=0;s[i]!='\0';i++)
		printf("%c",s[i]);
	printf("\nString length : %d\n",i);


}
