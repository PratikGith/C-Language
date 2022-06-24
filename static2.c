#include <stdio.h>
int init(void)
{
	return 50;
}
int main()
{
	static int i = init();
	printf("Value of i=%d\n",i);
	return 0;

}
