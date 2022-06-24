#include <stdio.h>
#include <string.h>
void main()
{
	int i,j;
	char s[5][20], temp[20];
	int ele = sizeof(s)/sizeof(s[0]);

	printf("Enter the 5 Strings :\n-------------------------------\n");
	for(i=0;i<ele;i++)
		scanf("%s",s[i]);
	printf("Print string \n-------------------------------------\n");
	for(i=0;i<ele;i++)
		printf("String S[%d] = %s\n",i,s[i]);

	printf("Print Bubblesort\n-------------------------------------\n");
	for(i=0;i<ele-1;i++)
	{
		for(j=0;j<ele-1-i;j++)
		{
			if(strcmp(s[j],s[j+1])>0)
			{
				strcpy(temp,s[j]);
				strcpy(s[j],s[j+1]);
				strcpy(s[j+1],temp);		
			
			}

		}
	}
	for(i=0;i<ele;i++)
		printf("String S[%d] = %s\n",i,s[i]);
}	
