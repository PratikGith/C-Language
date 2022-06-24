#include <stdio.h>
void main()
{
	int i;
	int *p=0;// pointer is not initialized is called wild pointer
	printf("%d\n",*p);


}
	
	
	
	/*{
	int i=10;
	char ch='a';
	float f=23.5;
	void *p;
	p=&i;
	printf("Integer = %d\n",*(int *)p);
	p=&ch;
	printf("char = %c\n",*(char *)p);
	p=&f;
	printf("float = %.2f\n",*(float *)p);


}*/
