#include <stdio.h>
void main()
{
	int i=258, *ip;
	char *cp;
	ip=cp=&i;

	printf("ip= %u , ip+1 =%u\n",ip,ip+1);
	printf("*ip=%d ,*ip+1 =%d\n",*ip,*ip+1);
//	printf("cp= %u , cp+1 =%u\n",cp,cp+1);
	printf("*cp= %d \n",*cp);
	cp=cp+1;

	printf("new *cp= %d \n",*cp);
//	printf("*cp= %d , *cp+1 =%d\n",*cp,*cp+1);



}
