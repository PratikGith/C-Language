#include <stdio.h>
void print_strcpy(const char *, char*);
void main()
{
	char s[20],d[20];
	printf("Ener the string :");
	scanf("%s",s);
	print_strcpy(s,d);
	printf("\n");
	printf("Str1 : %s\nDestination Str :%s\n",s,d);
}
void print_strcpy(const char *p, char *q)
{
	int i;
	for(i=0;p[i]!='\0';i++)
		q[i]=p[i];
		q[i]=p[i];
}
