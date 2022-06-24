#include <stdio.h>
void main()
{
	int i,j;
	char s[i], ch;
	printf("Enter the String : ");
	scanf("%s",s);
	printf("Delete Character :");
	scanf(" %c",&ch);

	printf("Print String : %s\nChar : %c\n---------------------\n",s,ch);

	for(i=0;s[i]!='\0';i++)
	{
		if(s[i] == ch)
		{
			 for(j=i;s[j];j++)
				 s[j]=s[j+1];
					i--;
		}
	}

	printf("New String : %s\n",s);



}
