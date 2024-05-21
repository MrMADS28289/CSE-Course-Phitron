#include <stdio.h>

long long int sum_of_arr(int n, long long int arr[], int i)
{
    if (i == n)
        return 0;
    long long int x = sum_of_arr(n, arr, i + 1);
    return x + arr[i];
}

int main()
{
    int n;
    scanf("%d", &n);
    long long int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &arr[i]);
    }
    long long int sum = sum_of_arr(n, arr, 0);
    printf("%lld", sum);
    return 0;
}