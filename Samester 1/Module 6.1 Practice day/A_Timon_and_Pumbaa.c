#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    int v = a - b;
    if (v >= 0)
    {
        printf("%d", v);
    }
    else
    {
        printf("0");
    }

    return 0;
}