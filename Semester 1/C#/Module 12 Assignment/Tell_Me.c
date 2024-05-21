#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        int x;
        scanf("%d", &x);
        int yes = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == x)
            {
                yes = 1;
                break;
            }
        }
        if (yes == 1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}