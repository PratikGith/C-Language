#include <stdio.h>
void main(int argc, char **argv)
{
	printf("Print command line argument \n-------------------------------------\n");
	int i;
	for(i=0;i<argc;i++)
		printf("argv[%d] = %s\n",i,argv[i]);
	printf("\nBase Address \n---------------------------------------\n");	
	for(i=0;i<argc;i++)
	printf("argv[%d] = %d\n",i,&argv[i]);
	printf("\nPrint Value \n-----------------------------------------\n");	
	printf("argv[0][1] = %c\n",argv[0][1]);
	printf("argv[1][1] = %c\n",argv[1][1]);
	printf("argv[2][1] = %c\n",argv[2][1]);




}
