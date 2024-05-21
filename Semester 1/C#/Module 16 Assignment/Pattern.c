#include <stdio.h>

int main()
{
    int n, m, l;
    scanf("%d", &n);
    m = n - 1;
    l = 1;
    for (int i = 1; i <= (2 * n); i++)
    {
        for (int j = 1; j <= m; j++)
        {
            printf(" ");
        }
        for (int j = 1; j <= l; j++)
        {
            if (i % 2 == 1)
            {
                printf("#");
            }
            else
            {
                printf("-");
            }
        }
        printf("\n");
        if (i <= n - 1)
        {
            m--;
            l = l + 2;
        }
        else
        {
            m++;
            l = l - 2;
        }
    }

    return 0;
}