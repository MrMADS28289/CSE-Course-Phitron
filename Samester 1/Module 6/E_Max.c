#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int nums;
    int max = 0;
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &nums);
        if (nums > max)
        {
            max = nums;
        }
    }

    printf("%d", max);

    return 0;
}