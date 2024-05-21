#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int min = __INT_MAX__;
    int p = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
            p = i + 1;
        }
    }
    printf("%d %d", min, p);

    return 0;
}