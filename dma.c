#include <stdio.h>
#include <stdlib.h>
void main()
{
	int *p,i;
	char *q;
	p= (int *)malloc(sizeof(int));
	q= (char *)malloc(sizeof(char )*10);
//	q= (char *)malloc(10);	
	printf("Enter one integer number :");
	scanf("%d",p);
	printf("enter one String :");
	scanf("%s",q);

	printf("print Number is : %d\n",*p);
	printf("print String is : %s\n",q);
	printf("Print string chr by char\n");
	for(i=0;q[i]!='\0';i++)
		printf("str[%d] = %c\n",i,q[i]);


}
