#include <stdio.h>

int main()
{
    int nums;
    scanf("%d", &nums);
    for (int i = 1; i <= nums; i++)
    {
        int n;
        scanf("%d", &n);
        do
        {
            printf("%d ", n % 10);
            n = n / 10;
        } while (n != 0);
        printf("\n");
    }

    return 0;
}