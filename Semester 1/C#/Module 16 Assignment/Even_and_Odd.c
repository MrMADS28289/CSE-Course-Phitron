#include <stdio.h>

void odd_even(void)
{
    int n;
    scanf("%d", &n);
    int a, neg = 0, pos = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a);
        if (a % 2 == 0)
        {
            pos++;
        }
        else
        {
            neg++;
        }
    }
    printf("%d %d", pos, neg);
}

int main()
{
    odd_even();
    return 0;
}