#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int lw = 5;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            lw++;
        }
    }

    int s = lw - 1, st = 1;
    for (int i = 1; i <= lw; i++)
    {
        for (int j = s; j >= 1; j--)
        {
            printf(" ");
        }
        for (int j = 1; j <= st; j++)
        {
            printf("*");
        }
        printf("\n");
        s--;
        st = st + 2;
    }

    for (int i = 1; i <= 5; i++)
    {
        for (int j = 5; j >= 1; j--)
        {
            printf(" ");
        }
        for (int j = 1; j <= n; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}