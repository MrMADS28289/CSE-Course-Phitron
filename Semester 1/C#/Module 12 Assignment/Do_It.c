#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int k;
    scanf("%d", &k);
    for (int i = 0; i < n; i++)
    {
        for (int i = 1; i <= k; i++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }
    return 0;
}