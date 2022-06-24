#include <stdio.h>
void main()
{
	int c=0,i;
	char ch, s[20];

	printf("Enter the String :");
	scanf("%s",s);

	printf("Enter the character : ");
	scanf(" %c",&ch);
	
	c=0;
	printf("\nString is :");
	for(i=0;s[i]!='\0';i++)
		if(s[i]==ch)
			c++;
	for(i=0;s[i];i++)
		printf("%c",s[i]);

	printf("\nCount = %d\n",c);


}
