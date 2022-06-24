#include <stdio.h>
#include <stdint.h>

int main() {
    // Write C code here
    uint32_t i;
    float f;
    char str[]="0x3f9d70";
    printf("Hello world\n");
    sscanf(str,"%x",&i);
    f = (*(float *)&i);
    
    printf("Value of Hex :%x is now float value : %f\n",f);
    
    return 0;
}
