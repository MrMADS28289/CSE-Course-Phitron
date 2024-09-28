#include <bits/stdc++.h>
using namespace std;

const int N = 1005;
char a[N][N];
bool vis[N][N];
int parent[N][N];
int n, m;
vector<pair<int, int>> d = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};

bool valid(int i, int j)
{
    return i >= 0 && i < n && j >= 0 && j < m && a[i][j] != '#' && !vis[i][j];
}
void bfs(int si, int sj)
{
    queue<pair<int, int>> q;
    q.push({si, sj});
    vis[si][sj] = true;
    while (!q.empty())
    {
        pair<int, int> cur = q.front();
        q.pop();
        int x = cur.first, y = cur.second;

        if (a[x][y] == 'D')
        {
            int px, py;
            while (parent[x][y] != -1)
            {
                if (a[x][y] != 'D')
                {
                    a[x][y] = 'X';
                }
                int p = parent[x][y];
                px = p / m;
                py = p % m;
                x = px;
                y = py;
            }
        }

        for (int i = 0; i < 4; i++)
        {
            int nx = x + d[i].first;
            int ny = y + d[i].second;

            if (valid(nx, ny))
            {
                q.push({nx, ny});
                vis[nx][ny] = true;
                parent[nx][ny] = x * m + y;
            }
        }
    }
}

int main()
{
    cin >> n >> m;
    int si = -1, sj = -1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
            if (a[i][j] == 'R')
            {
                si = i;
                sj = j;
            }
        }
    }
    memset(vis, false, sizeof(vis));
    memset(parent, -1, sizeof(parent));
    bfs(si, sj);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cout << a[i][j];
        }
        cout << endl;
    }

    return 0;
}