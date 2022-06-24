#include <stdio.h>
void main()
{
	int i,temp;
	char s[20], ch1,ch2;
	printf("Enter the string :\n");
	scanf("%s",s);
	scanf(" %c%c",&ch1,&ch2);

	for(i=0;s[i];i++)
	{
		if(s[i]==ch1)
			if(ch1!=ch2)
			{
				temp=ch1;
				ch1=ch2;
				ch2=temp;	
			}
	printf("New String is : %s\n",s);
	}
	printf("End\n");

}
