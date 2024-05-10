#include <stdio.h>
#include <stdlib.h>

int main()
{
    int test;
    scanf("%d", &test);
    for (int t = 0; t < test; t++)
    {
        int n;
        scanf("%d", &n);
        int a[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        int b[n];
        for (int i = 0; i < n; i++)
        {
            b[i] = a[i];
        }

        for (int i = 0; i < n; i++)
        {
            int k = 1;
            for (int j = 0; j < n; j++)
            {
                if (b[j] > b[k])
                {
                    int temp = b[j];
                    b[j] = b[k];
                    b[k] = temp;
                };
                k++;
            }
        }

        int c[n];
        for (int i = 0; i < n; i++)
        {
            c[i] = abs(a[i] - b[i]);
        }

        for (int i = 0; i < n; i++)
        {
            printf("%d ", c[i]);
        }
        printf("\n");
    }

    return 0;
}