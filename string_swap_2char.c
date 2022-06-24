#include <stdio.h>
void main()
{
	int i,temp=0;
	char s[20],ch1,ch2;

	printf("Enter the String :");
	scanf("%s",s);
//	scanf("%[^\n]",s);
	printf("Print the string : %s\n",s);

	printf("Enter the Changing Character : ");
	scanf(" %c %c",&ch1,&ch2);
	printf("Print the Character :ch1 = %c ch2 = %c\n",ch1, ch2);

	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]==ch1)	
			if(ch1!=ch2)
			{
				temp = ch1;
				ch1 = ch2;
				ch2 = temp;
			}
	}	
	printf("New String is : %s\n",s);


}
