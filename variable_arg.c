// Online C compiler to run C program online
#include <stdio.h>
#include <stdarg.h>
int sum(int,...);

int main() {
    // Write C code here
    int i=10,j=20,k=30,l=40,m=0;
    
    printf("Hello\n");
    printf("Sum of 10 and 20 = %d\n",sum(2,i,j));
    printf("Sum of 10,20 and 30 = %d\n",sum(3,i,j,k));
    printf("Sum of 10,20,30 and 40 = %d\n",sum(4,i,j,k,l));
    printf("End\n");
    
    return 0;
}
int sum(int n,...)
{
    int i,s=0;
    va_list v; // v is a new datatype of varible argument list function
    va_start(v,n); //n is the fixed number
    for(i=0;i<n;i++)
        s+=va_arg(v,int); //last argument is integer type
    return s;
    va_end(v);
    
}
