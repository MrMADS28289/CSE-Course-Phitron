#include <stdio.h>

void evenIndices(int n, int arr[], int i)
{
    if (i == n)
        return;

    i++;
    evenIndices(n, arr, i);
    if ((i - 1) % 2 == 0)
        printf("%d ", arr[i - 1]);
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
    evenIndices(n, arr, 0);
    return 0;
}