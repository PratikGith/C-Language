// Online C compiler to run C program online
#include <stdio.h>
struct st {
    int x;
    char ch1;
    char ch2;
}s1;

int num =10;
void fun_call(int *);

int main() {
    // Write C code here
    int num =20;
    int *p = &num;
    printf("Hello world\n");
    fun_call(p);
    printf("Number is : %d\n",*p);
    printf("\nEnd\n");
    return 0;
}
void fun_call(int *q)
{
    int i;
    q = &i;
    printf("pointer *q : %d\n",*q);
}
