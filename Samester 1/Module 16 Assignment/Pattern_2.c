#include <stdio.h>

int main()
{
    int n, o, p;
    scanf("%d", &n);
    o = n - 1;
    p = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= o; j++)
        {
            printf(" ");
        }
        for (int j = p; j >= 1; j--)
        {
            printf("%d", j);
        }
        printf("\n");
        o--;
        p++;
    }
    return 0;
}