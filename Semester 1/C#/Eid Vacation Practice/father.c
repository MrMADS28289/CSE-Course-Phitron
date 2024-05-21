#include <stdio.h>

int main()
{
    long long int x;
    scanf("%lld", &x);
    long long int daughter = x / 5;
    long long int father = x - daughter;
    printf("%lld %lld", father, daughter);

    return 0;
}