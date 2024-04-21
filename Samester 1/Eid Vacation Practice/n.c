#include <stdio.h>

int main()
{
    long long int n;
    scanf("%lld", &n);
    long long int i;
    long long int sum = 0;
    for (i = 1; i <= n; i++)
    {
        sum += i;
    }
    printf("%lld", sum);

    return 0;
}