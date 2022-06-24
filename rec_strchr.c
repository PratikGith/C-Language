#include <stdio.h>
char * rec_strchr(const char *, char );
void main()
{
	char s[]="Pratik prajapati";
	char d,*ptr;
	ptr=rec_strchr(s,d);
	if(*ptr==0)
		printf("Character is not present \n");
	else
	printf("Character is present :%c\n",*ptr);
}
char * rec_strchr(const char *p, char q)
{
	if(*p!='\0')
	{
		if(q ==*p)
			return &p;
		else
			return rec_strcpy(p+1, q);
	}
	else
		return (0);
}
