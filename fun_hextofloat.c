// Online C compiler to run C program online
#include <stdio.h>

int is_hex(char arr[])
{
    if (arr[0] == '0' && (arr[1] == 'x' || arr[1] == 'X')) {
        return 1;
    }
    return 0;
}

int check_if_good(char arr[])
{
    if (is_hex(arr)) {
        int len = strlen(arr);
        for (int i = 2; i < len; i++) {
            if ((arr[i] > 'f' && arr[i] <= 'z') || (arr[i] > 'F' && arr[i] <= 'Z')) {
                return 0;
            }
        }
    }

    return 1;
}

int main()
{
    float x;
    char input[10];
    scanf("%s", input);
    printf("%s", input);
    return 0;
}
