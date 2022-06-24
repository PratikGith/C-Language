#include <stdio.h>
void main(int argc, char **argv)
{
	int i;
	for(i=0;argv[1][i];i++);
		printf("String Length of \"%s\" = %d\n",argv[1],i);



}
