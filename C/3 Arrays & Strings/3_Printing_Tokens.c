#include <stdio.h>
#include <string.h>

int main()
{
    char arr[1000];
    gets(arr);

    int n = strlen(arr);

    for (int i = 0; i < n; i++)
    {
        if (arr[i - 1] == ' ')
            printf("\n");

        printf("%c", arr[i]);
    }

    return 0;
}