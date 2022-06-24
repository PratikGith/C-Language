#include <stdio.h>
char *my_strchr(const char *, char);
void main()
{
	char s[20], ch;
	char *q;
	
	printf("Enter the string :");
	scanf("%s",s);

	printf("\nEnter the character  :");
	scanf(" %ch",&ch);

	printf("\nString = %s\n Char : %c\n",s,ch);
	q=my_strchr(s,ch);
	if(q==0)
		printf("It's not found\n");
	else
		printf("Present is %c\n",*q);
	printf("END...\n");

}
char *my_strchr(const char *p,char ch)
{
	int i;
	for(i=0;p[i]!='\0';i++)
		if(p[i]==ch)
			return(&p[i]);
	return 0;

}
