#include <stdio.h>

int main()
{
    int nums[50];
    for (int i = 0; i <= 50; i++)
    {
        nums[i] = i;
    }

    for (int i = 0; i <= 50; i++)
    {
        // nums[i] = nums[i] + 100;
        // if (nums[i] % 2 == 0)
        // {
        //     float f = nums[i] - 0.1;
        //     printf("%f\n", f);
        // }
        // n = nums[i] + n;
        // int n = ;
        if (nums[i] >= 10 && nums[i] % 2 == 1)
        {
            int x, y = 0;
            x = nums[i] / 10;
            y = nums[i] % 10;
            if (x % 2 == 0)
            {
                printf("%d(*_-)%d\n", x, y);
            }
        }
    }

    return 0;
}