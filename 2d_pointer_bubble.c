#include <stdio.h>
#include <string.h>
void main()
{
	int i,j;
	char s[5][20], *temp;
	char *p[5];
	int ele = sizeof(s)/sizeof(s[0]);

	printf("Enter the 5 Strings \n-------------------------------\n");
	for(i=0;i<ele;i++)
		scanf("%s",s[i]);
	printf("Print 5 string \n-------------------------------------\n");
	for(i=0;i<ele;i++)
		printf("String S[%d] = %s\n",i,s[i]);

	printf("Assign string into pointer\n");
	for(i=0;i<ele;i++)
		p[i] = s[i];		// s[i] = p[i] is not possible, bos array is constant pointer
	printf("Print Bubblesort\n-------------------------------------\n");
	for(i=0;i<ele-1;i++)
	{
		for(j=0;j<ele-1-i;j++)
		{
			if(p[j]>p[j+1])
		//	if(strcmp(p[j],p[j+1])>1)
			{
				temp = p[j];
				p[j] = p[j+1];
				p[j+1] = temp;	
			}

		}
	}
	for(i=0;i<ele;i++)
		printf("String p[%d] = %s\n",i,p[i]);
}	
