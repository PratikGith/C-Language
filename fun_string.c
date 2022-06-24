#include <stdio.h>
void print_string(char *);
void main()
{
	
	char s[20];
	printf("Enter the String :");
	scanf("%s",s);
	printf("Strinf is :%s\n--------------\n",s);
	print_string(s);
//	printf("\nEnd\n");
}
void print_string(char *p)
{
	int i;
	for(i=0;p[i];i++)
//	for(i=0;p[i]!='\0';i++)
		printf("%c",*p++);
	//	printf("%c",*(p+i));
	printf("\n");
}
