#include <stdio.h>
#include <string.h>

int occurrence(char *arr, char a)
{
    char *ptr = arr;
    int count = 0;

    while (*ptr != '\0')
    {
        if (*ptr == a)
            count++;

        ptr++;
    }
    return count;
}

int main()
{
    char arr[1000];
    gets(arr);

    int c0 = occurrence(arr, '0');
    int c1 = occurrence(arr, '1');
    int c2 = occurrence(arr, '2');
    int c3 = occurrence(arr, '3');
    int c4 = occurrence(arr, '4');
    int c5 = occurrence(arr, '5');
    int c6 = occurrence(arr, '6');
    int c7 = occurrence(arr, '7');
    int c8 = occurrence(arr, '8');
    int c9 = occurrence(arr, '9');

    printf("%d %d %d %d %d %d %d %d %d %d ", c0, c1, c2, c3, c4, c5, c6, c7, c8, c9);

    return 0;
}