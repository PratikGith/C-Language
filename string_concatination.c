#include<stdio.h>
void main()
{
	int i,j;
	char Main[25],sub[15];
	printf("Enter the Main-String :");
	scanf("%s",Main);
	
	printf("\nEnter the Sub-String :");
	scanf("%s",sub);
	printf("Str1 : %s\nStr2 : %s\n",Main,sub);

	for(i=0;Main[i];i++);
		for(j=0;sub[j];j++)
			Main[i+j] = sub[j];
			Main[i+j] = sub[j];
	
	printf("Main String : %s\nSub String :%s\n",Main,sub);
		

}
