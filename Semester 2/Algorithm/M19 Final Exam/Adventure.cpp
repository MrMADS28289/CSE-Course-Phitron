#include <bits/stdc++.h>
using namespace std;

const int N = 1010;
int dp[N][N];
int knapsack(int n, int weight[], int value[], int w)
{
    if (n == 0 || w == 0)
        return 0;
    if (dp[n][w] != -1)
        return dp[n][w];
    if (weight[n - 1] <= w)
    {
        int pick = knapsack(n - 1, weight, value, w - weight[n - 1]) + value[n - 1];
        int notPick = knapsack(n - 1, weight, value, w);
        return dp[n][w] = max(pick, notPick);
    }
    else
    {
        int notPick = knapsack(n - 1, weight, value, w);
        return dp[n][w] = notPick;
    }
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, w;
        cin >> n >> w;
        int weight[n], value[n];
        for (int i = 0; i < n; i++)
        {
            cin >> weight[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> value[i];
        }
        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= w; j++)
            {
                dp[i][j] = -1;
            }
        }
        cout << knapsack(n, weight, value, w) << endl;
    }

    return 0;
}