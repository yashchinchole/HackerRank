#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    int n, i;
    scanf("%d", &n);

    int arr[1000];
    int sum = 0;

    for (i = 1; i <= n; i++)
    {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("%d\n", sum);

    return 0;
}