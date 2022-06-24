#include <stdio.h>
void main()
{
	int i,j,l;
	char s1[10],s2[10],d[25];

	printf("Enter the First string : ");
	scanf("%s",s1);
	printf("\nEnter the Second String : ");
	scanf("%s",s2);

	printf("1st : %s\n2nd : %s\n-------------------------------\n",s1,s2);

	for(i=0,j=0,l=0;s1[i]||s2[j];)
	{
		if(s1[i]!='\0')
			d[l++] = s1[i++];
		if(s2[j]!='\0')
			d[l++] = s2[j++];
	
	}
	d[l] = '\0';
	printf("Two Merge String : %s\n",d);

}
