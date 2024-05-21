#include <stdio.h>

int main()
{
    long long int X;
    scanf("%lld", &X);
    if (X >= 15)
    {
        long long int total = X * 365;
        printf("%lld", total);
    }

    return 0;
}