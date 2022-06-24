
#include <stdio.h>
void main()
{
        int i;
        char s[] = "Hello";
        char ch[] = {'a','b','c','d','e'};
                printf("string : %s\nChar :",s);

                for  (i=0;i<5;i++)
                        printf(" %c",ch[i]);
              printf("\nSizeof Char : %d Bytes\nSizeof String; %d Bytes\n",sizeof (ch), sizeof(s));


}
