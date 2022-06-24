#include <stdio.h>
void main(int argc, char **argv)
{
	int i;
	if(argc!=3)
	{
		printf("Usage : ./len string \n");
		return ;
	}
	for(i=0;argv[1][i];i++);
		printf("String Len \"%s\" = %d\n",argv[1],i);

}
