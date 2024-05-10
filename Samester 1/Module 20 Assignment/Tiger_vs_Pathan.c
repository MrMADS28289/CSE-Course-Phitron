#include <stdio.h>

int main()
{
    int test;
    scanf("%d", &test);
    for (int t = 0; t < test; t++)
    {
        int r;
        scanf("%d", &r);
        char w[r];
        scanf("%s", w);
        int p = 0, t = 0;
        for (int i = 0; i < r; i++)
        {
            if (w[i] == 'T')
            {
                t++;
            }
            else if (w[i] == 'P')
            {
                p++;
            }
        }

        if (p > t)
        {
            printf("Pathaan");
        }
        else if (t > p)
        {
            printf("Tiger");
        }
        else
        {
            printf("Draw");
        }
        printf("\n");
    }

    return 0;
}