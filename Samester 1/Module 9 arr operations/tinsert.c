#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n + 1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int index, value;
    scanf("%d %d", &index, &value);
    for (int i = n; i >= index + 1; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[index] = arr[value];
    for (int i = 0; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }
    // printf("v%d i%d", value, index);

    return 0;
}