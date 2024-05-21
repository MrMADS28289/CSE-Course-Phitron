#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int p = 0, s = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == i)
            {
                p = p + a[i][j];
            }
        }
        for (int j = 0; j < n; j++)
        {
            if ((i + j) == (n - 1))
            {
                s = s + a[i][j];
            }
        }
    }
    printf("%d", abs(p - s));

    return 0;
}