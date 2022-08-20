#include <stdio.h>

int main()
{
    char str[100];
    gets(str);

    printf("Hello, World!\n");
    printf("%s", str);

    return 0;
}