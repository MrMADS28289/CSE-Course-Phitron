#include <stdio.h>

int main()
{
    int n;
    int x;
    int y = -1;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    scanf("%d", &x);
    for (int i = 0; i < n; i++)
    {
        if (x == a[i])
        {
            y = i;
            break;
        }
    }
    printf("%d", y);

    return 0;
}