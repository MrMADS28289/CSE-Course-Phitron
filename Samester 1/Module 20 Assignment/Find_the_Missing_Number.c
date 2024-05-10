#include <stdio.h>

int main()
{
    long long int test;
    scanf("%lld", &test);

    for (long long int t = 0; t < test; t++)
    {
        long long int m;
        scanf("%lld", &m);
        long long int a, b, c;
        scanf("%lld %lld %lld", &a, &b, &c);
        long long int isMissing = a * b * c;
        long long int missing = m / isMissing;

        if (isMissing * missing == m)
        {
            printf("%lld", missing);
        }
        else
        {
            printf("-1");
        }
        printf("\n");
    }

    return 0;
}
