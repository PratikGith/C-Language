#include <stdio.h>
void rec_strcpy(const char *, char *);
void main()
{
	char s[]="Pratik prajapati";
	char d[20];
	rec_strcpy(s,d);
	printf("Copy of String : %s\n",d);
}
void rec_strcpy(const char *p, char *q)
{
	if(*p!='\0')
	{
		*q=*p;
		rec_strcpy(p+1, q+1);
	}
	else
		*q=*p;

}
