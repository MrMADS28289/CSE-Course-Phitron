#include <stdio.h>

long long int factorial(long long int n)
{
    if (n == 0)
        return 1;
    long long int x = factorial(n - 1);
    return n * x;
}

long long int main()
{
    long long int n;
    scanf("%lld", &n);
    long long int factorial_of_n = factorial(n);
    printf("%lld", factorial_of_n);

    return 0;
}