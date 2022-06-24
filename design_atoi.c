#include <stdio.h>
int print_atoi(char *);
void main()
{
	int ret;
	char s[]="98986";
	ret = print_atoi(s);
	printf("String : %s\nNumber : %d\nEnd\n",s,ret);

}
int print_atoi(char *p)
{
	int i,num=0;
	for(i=0;p[i]!='\0';i++)
		num=num*10 + p[i]-48;
	return num;

}

