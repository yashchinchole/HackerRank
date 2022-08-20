//   4   4   4   4   4   4   4            n = 4;
//   4   3   3   3   3   3   4
//   4   3   2   2   2  [3]  4            min1 = i <= len - i ? i - 1 : len - i;
//   4   3   2   1   2   3   4
//   4   3   2   2   2   3   4            min2 = j <= len - j ? j - 1 : len - j;
//   4   3   3   3   3   3   4
//   4   4   4   4   4   4   4            min = min1 <= min2 ? min1 : min2;

//   Printing value is equal to subtraction of minimum distance of that element from input
//   Let [3] --> i = 3 & j = 6
//   n = 4; element minimum distance = 1
//   n - min;

#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int len = 2 * n - 1;
    int min, min1, min2;

    for (int i = 1; i <= len; i++)
    {
        for (int j = 1; j <= len; j++)
        {
            min1 = i <= len - i ? i - 1 : len - i;
            min2 = j <= len - j ? j - 1 : len - j;

            min = min1 <= min2 ? min1 : min2;

            printf("%d ", n - min);
        }
        printf("\n");
    }

    return 0;
}