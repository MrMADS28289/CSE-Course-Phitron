#include <bits/stdc++.h>
using namespace std;

int dp[1005][1005];
int checkSum(int n, int sum, int arr[])
{
    if (sum == 0)
        return true;
    if (n == 0 || sum < 0)
        return false;
    if (dp[n][sum] != -1)
        return dp[n][sum];
    if (arr[n - 1] <= sum)
    {
        int pick = checkSum(n - 1, sum - arr[n - 1], arr);
        int noPick = checkSum(n - 1, sum, arr);
        return dp[n][sum] = pick || noPick;
    }
    else
    {
        return dp[n][sum] = checkSum(n - 1, sum, arr);
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, mark;
        cin >> n >> mark;
        int nums[n];
        for (int i = 0; i < n; i++)
        {
            cin >> nums[i];
        }
        int target = 1000 - mark;

        if (target == 0)
        {
            cout << "YES" << endl;
            continue;
        }
        if (target < 0)
        {
            cout << "NO" << endl;
            continue;
        }
        memset(dp, -1, sizeof(dp));

        if (checkSum(n, target, nums))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}