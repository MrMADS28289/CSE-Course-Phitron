#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int m;
    scanf("%d", &m);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    int c[100001] = {0};
    for (int i = 0; i < n; i++)
    {
        c[a[i]]++;
    }
    for (int i = 1; i <= m; i++)
    {
        printf("%d\n", c[i]);
    }
    return 0;
}