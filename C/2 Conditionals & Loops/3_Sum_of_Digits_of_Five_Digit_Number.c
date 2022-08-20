#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int rem = 0, sum = 0;

    for (; n > 0;)
    {
        rem = n % 10;
        sum += rem;
        n /= 10;
    }

    printf("%d\n", sum);

    return 0;
}