#include <bits/stdc++.h>
using namespace std;

bool vis[100005];
void bfs(int src, int N)
{
    queue<int> q;
    q.push(src);
    vis[src] = true;
    while (!q.empty())
    {
        int par = q.front();
        q.pop();
        if (par == N)
        {
            cout << "YES" << endl;
            return;
        }

        int add = par + 3;
        if (add <= N && !vis[add])
        {
            q.push(add);
            vis[add] = true;
        }

        int mul = par * 2;
        if (mul <= N && !vis[mul])
        {
            q.push(mul);
            vis[mul] = true;
        }
    }

    cout << "NO" << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        memset(vis, false, sizeof(vis));
        bfs(1, n);
    }

    return 0;
}
