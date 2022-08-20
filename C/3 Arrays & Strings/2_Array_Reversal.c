#include <stdio.h>

void reverse(int *arr)
{
    int n, i;
    scanf("%d", &n);

    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < n / 2; i++)
    {
        int l = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = l;
    }

    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
}

int main()
{
    int arr[1000];

    reverse(arr);

    return 0;
}