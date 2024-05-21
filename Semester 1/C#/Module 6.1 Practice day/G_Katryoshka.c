#include <stdio.h>

int main()
{
    long long int n, m, k;
    scanf("%lld %lld %lld", &n, &m, &k);
    long long int p = 0;
    if (n < k && n < m)
    {
        p = n;
    }
    else if (k < n && k < m)
    {
        p = k;
    }
    else
    {
        p = m;
        n = n - m;
        k = k - m;
        if (k * 2 <= n)
        {
            while (k != 0)
            {
                n = n - 2;
                k = k - 1;
                p++;
            }
        }
        else
        {
            while (n != 0)
            {
                n = n - 2;
                k = k - 1;
                p++;
            }
        }
    }

    printf("%lld\n", p);
    return 0;
}