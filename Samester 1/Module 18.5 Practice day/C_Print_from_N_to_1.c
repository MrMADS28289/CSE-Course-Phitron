#include <stdio.h>

void n_from_1(int n, int i)
{
    if (i == n)
        return;
    i++;
    n_from_1(n, i);
    printf("%d", i);
    if (i == 1)
        return;
    printf(" ");
}

int main()
{
    int n;
    scanf("%d", &n);
    n_from_1(n, 0);
    return 0;
}