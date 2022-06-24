#include <stdio.h>
void main()
{
	int i,j,k, temp;
	char s[20];

	printf("Enter the string :");
	scanf("%s",s);

		printf("Printing String is :");
	for(i=0;s[i]!='\0';i++)
		printf(" %c",s[i]);
	printf("\nReverse printing the string \n");
	for(i=0;s[i]!='\0';i++);
	{
		j=i-1;
		for(i=0,j;j>i;i++,j--)
		{
			if(s[j]!=s[i])
			{
				temp = s[i];
				s[i] = s[j];
				s[j] = temp;
			
			}

		}
		for(k=0;s[k]!='\0';k++)
			printf("s[%d] = %c\n",k,s[k]);
	}	
		printf("\n");

}
