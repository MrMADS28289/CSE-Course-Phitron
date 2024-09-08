#include <bits/stdc++.h>
using namespace std;

char a[1005][1005];
bool vis[1005][1005];
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
int n, m;
bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m || a[i][j] == '#' || vis[i][j])
        return false;
    return true;
}

int dfs(int si, int sj)
{
    vis[si][sj] = true;
    int rooms = 1;
    for (int i = 0; i < 4; i++)
    {
        int ci = si + d[i].first;
        int cj = sj + d[i].second;
        if (valid(ci, cj))
        {
            rooms += dfs(ci, cj);
        }
    }
    return rooms;
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    memset(vis, false, sizeof(vis));

    vector<int> rooms;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (a[i][j] == '.' && !vis[i][j])
            {
                int apmt = dfs(i, j);
                rooms.push_back(apmt);
            }
        }
    }

    if (rooms.empty())
    {
        cout << 0 << endl;
    }
    else
    {
        sort(rooms.begin(), rooms.end());
        for (int rm : rooms)
        {
            cout << rm << " ";
        }
        cout << endl;
    }

    return 0;
}
