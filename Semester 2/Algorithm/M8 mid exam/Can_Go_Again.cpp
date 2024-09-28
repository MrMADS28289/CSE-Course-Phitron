#include <bits/stdc++.h>
using namespace std;

class Edge
{
public:
    int u, v;
    long long int c;
    Edge(int u, int v, long long int c)
    {
        this->u = u;
        this->v = v;
        this->c = c;
    }
};

const int MAX_N = 1005;
const long long int INF = 1e18;
long long int dis[MAX_N];

int main()
{
    int n, e;
    cin >> n >> e;
    vector<Edge> EdgeList;
    while (e--)
    {
        int u, v;
        long long int c;
        cin >> u >> v >> c;
        EdgeList.push_back(Edge(u, v, c));
    }

    int src;
    cin >> src;
    for (int i = 1; i <= n; i++)
    {
        dis[i] = INF;
    }

    dis[src] = 0;
    for (int i = 1; i <= n - 1; i++)
    {
        for (auto ed : EdgeList)
        {
            int u = ed.u;
            int v = ed.v;
            long long int c = ed.c;
            if (dis[u] < INF && dis[u] + c < dis[v])
            {
                dis[v] = dis[u] + c;
            }
        }
    }

    bool cycle = false;
    for (auto ed : EdgeList)
    {
        int u = ed.u;
        int v = ed.v;
        long long int c = ed.c;
        if (dis[u] < INF && dis[u] + c < dis[v])
        {
            cycle = true;
            break;
        }
    }

    if (cycle)
    {
        cout << "Negative Cycle Detected" << endl;
    }
    else
    {
        int t;
        cin >> t;
        while (t--)
        {
            int d;
            cin >> d;
            if (dis[d] == INF)
            {
                cout << "Not Possible" << endl;
            }
            else
            {
                cout << dis[d] << endl;
            }
        }
    }

    return 0;
}
