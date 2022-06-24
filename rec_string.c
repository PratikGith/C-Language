#include <stdio.h>
void  print_string(char *);
void main()
{
	char s[] = "ABCDE";
	print_string(s);
	printf("\n");

}
void print_string(char *p)
{
	if(*p!='\0')
	{
		print_string(p+1);
		printf("%c",*p);
	}

}
