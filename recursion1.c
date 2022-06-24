#include <stdio.h>
void main()
{
	static int i=0;
//	int i=0;
	printf("Count = %d\n",i);
	i++;
	if(i<3)
		main();
	printf("End =%d\n",i);

}
