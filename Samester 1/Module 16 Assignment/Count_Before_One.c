#include <stdio.h>

int count_before_one(int n, int arr[])
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            break;
        }
        else
        {
            cnt++;
        }
    }

    return cnt;
}

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int cnt = count_before_one(n, arr);
    printf("%d", cnt);

    return 0;
}