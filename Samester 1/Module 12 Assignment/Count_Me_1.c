#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int x = 0, y = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            x++;
        }
        else if (arr[i] % 3 == 0)
        {
            y++;
        }
    }
    printf("%d %d", x, y);

    return 0;
}