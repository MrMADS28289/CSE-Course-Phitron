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
    int min = __INT_MAX__, max = __WINT_MIN__;
    for (int i = 0; i < n; i++)
    {
        if (max < a[i])
            max = a[i];
        if (min > a[i])
            min = a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (max == a[i])
        {
            printf("%d ", min);
        }
        else if (min == a[i])
        {
            printf("%d ", max);
        }
        else
        {
            printf("%d ", a[i]);
        }
    }

    return 0;
}