#include <bits/stdc++.h>
using namespace std;

const long long int INF = INT_MAX;
int main()
{
    int n, e;
    cin >> n >> e;

    long long int adj[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            adj[i][j] = INF;
            if (i == j)
                adj[i][j] = 0;
        }
    }

    while (e--)
    {
        int a, b, c;
        cin >> a >> b >> c;
        adj[a - 1][b - 1] = min(adj[a - 1][b - 1], (long long int)c);
    }

    for (int k = 0; k < n; k++)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (adj[i][k] < INF && adj[k][j] < INF && adj[i][k] + adj[k][j] < adj[i][j])
                {
                    adj[i][j] = adj[i][k] + adj[k][j];
                }
            }
        }
    }

    int q;
    cin >> q;
    while (q--)
    {
        int x, y;
        cin >> x >> y;
        long long int maxCost = adj[x - 1][y - 1];
        if (maxCost == INF)
        {
            cout << -1 << endl;
        }
        else
        {
            cout << maxCost << endl;
        }
    }

    return 0;
}
