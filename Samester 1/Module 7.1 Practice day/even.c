#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);
    int first_even = N / 5 - 4;
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", first_even + 2 * i);
    }

    return 0;
}
