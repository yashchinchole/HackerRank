#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
    int a;
    int b;
    int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle *tr, int n)
{
    int i, j;
    float *area = malloc(n * sizeof(triangle));

    for (i = 0; i < n; i++)
    {
        float p = (tr[i].a + tr[i].b + tr[i].c) / 2.0;
        float ar = sqrt(p * (p - tr[i].a) * (p - tr[i].b) * (p - tr[i].c));

        area[i] = ar;
    }

    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (area[i] > area[j])
            {
                float temp = area[i];
                area[i] = area[j];
                area[j] = temp;

                triangle s = tr[i];
                tr[i] = tr[j];
                tr[j] = s;
            }
        }
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    triangle *tr = malloc(n * sizeof(triangle));
    for (int i = 0; i < n; i++)
    {
        scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
    }
    sort_by_area(tr, n);
    for (int i = 0; i < n; i++)
    {
        printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
    }
    return 0;
}