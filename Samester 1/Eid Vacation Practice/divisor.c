#include <stdio.h>

int main()
{
    long long int d, q, r;
    scanf("%lld %lld %lld", &d, &q, &r);
    long long int divisor = d / q;
    printf("%lld", divisor);

    return 0;
}