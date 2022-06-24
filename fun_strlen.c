#include <stdio.h>
void print_strlen(const char *);
void main()
{
	char s[20];	
	printf("Enter the string :");
	scanf("%s",s);
	print_strlen(s);
	printf("\n");

}
void print_strlen(const char * p)
{
	int i;
	printf("String :");
	for(i=0;p[i]!='\0';i++)
		printf("%c",p[i]);
	
	printf(" Length : %d",i);
}
