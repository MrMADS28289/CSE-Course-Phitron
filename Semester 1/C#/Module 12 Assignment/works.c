#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int m1, m2, d;
        scanf("%d %d %d", &m1, &m2, &d);
        int f = m1 + m2;
        int w = d * m1;
        int n = w / f;
        int r = d - n;
        printf("%d\n", r);
    }

    return 0;
}