#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main()
{
	char s[20],d[20];
	printf("Enter the String :");
	scanf("%s",s);
	strcpy(d,s);
	printf("str=%s, Des=%s\n",s,d);

}
