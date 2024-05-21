#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int x, y;
    x = n % 10;
    y = n / 10;
    if (x % y == 0 || y % x == 0)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

    return 0;
}