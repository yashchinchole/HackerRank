#include <stdio.h>

int sum(int n)
{
    if (n == 1)
        return 1;

    if (n == 2)
        return 2;

    if (n == 3)
        return 3;

    else
        return sum(n - 1) + sum(n - 2) + sum(n - 3);
}

int main()
{
    int n;
    scanf("%d", &n);

    int ans = sum(n);
    printf("%d\n", ans);

    return 0;
}