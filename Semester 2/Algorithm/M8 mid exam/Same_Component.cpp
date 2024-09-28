#include <bits/stdc++.h>
using namespace std;

bool vis[1050][1050];
char dis[1050][1050];
int n, m;
vector<pair<int, int>> d = {{1, 0}, {-1, 0}, {0, 1}, {0, -1}};

bool valid(int i, int j)
{
    if (i < 0 || i >= n || j < 0 || j >= m)
        return false;
    return true;
}

void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;

    while (!q.empty())
    {
        pair<int, int> par = q.front();
        int a = par.first, b = par.second;
        q.pop();

        for (int i = 0; i < 4; i++)
        {
            int ci = a + d[i].first;
            int cj = b + d[i].second;

            if (valid(ci, cj) && vis[ci][cj] == false && dis[ci][cj] == '.')
            {
                q.push({ci, cj});
                vis[ci][cj] = true;
            }
        }
    }
}

int main()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> dis[i][j];
        }
    }

    int si, sj, di, dj;
    cin >> si >> sj >> di >> dj;

    memset(vis, false, sizeof(vis));
    bfs(si, sj);

    if (vis[di][dj])
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
