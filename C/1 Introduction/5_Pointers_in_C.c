#include <stdio.h>

void update(int *a, int *b)
{
    int x = *a, y = *b;
    *a += *b;
    *b = (x > y) ? x - y : y - x;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    update(&a, &b);

    printf("%d \n%d", a, b);

    return 0;
}