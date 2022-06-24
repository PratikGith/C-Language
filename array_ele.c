#include <stdio.h>
void main()
{
	int i=0,ele,a[5]={10,20,30,40,50};
	ele= sizeof(a)/ sizeof (a[0]);
	printf("Size of a = %d Bytes\nSize of a[0] = %d Byte\nElements = %d\n",sizeof (a),sizeof(a[0]),ele);
	for(i=0;i<ele;i++)
		printf("a[%d]= [%d]\n",i,a[i]);


}
