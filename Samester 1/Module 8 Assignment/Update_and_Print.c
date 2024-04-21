#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int v[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &v[i]);
    }
    long long int pos = 0, nag = 0;
    for (int i = 0; i < n; i++)
    {
        if (v[i] < 0)
        {
            nag = nag + v[i];
        }
        else
        {
            pos = pos + v[i];
        }
    }
    printf("%lld %lld", pos, nag);

    return 0;
}