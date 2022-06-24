#include <stdio.h>
void main()
{
	int i,j;
	char s[5][20], temp[20];
	int ele = sizeof(s)/sizeof(s[0]);

	printf("Enter the 5 Strings :\n-------------------------------\n");
	for(i=0;i<ele;i++)
		scanf("%[^\n] ",s[i]);
	printf("Print string \n-------------------------------------\n");
	for(i=0;i<ele;i++)
		printf("String S[%d] = %s\n",i,s[i]);



}
