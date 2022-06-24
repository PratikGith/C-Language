#include <stdio.h>
int print_string(char *);
void main()
{
	int ret;
	char s[]="Pratik prajapati";
	ret=print_string(s);
	printf("Length = %d\n",ret);

}
int print_string(char *p)
{

	if(*p!='\0')
	{
		return (1+print_string(p+1));
	}
	else
		return 0;
}
