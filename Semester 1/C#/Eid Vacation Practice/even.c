#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    // Initialize the first even number
    int first_even = (N - 8) / 2;

    // Print the five consecutive even numbers
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", first_even + 2 * i);
    }

    return 0;
}
