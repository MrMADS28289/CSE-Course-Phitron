#include <bits/stdc++.h>
using namespace std;

const int N = 1050;
vector<pair<int, int>> v[N];
long long int dis[N];

void dijkstra(int src, int n)
{
    priority_queue<pair<long long int, long long int>, vector<pair<long long int, long long int>>, greater<pair<long long int, long long int>>> pq;
    pq.push({0, src});
    dis[src] = 0;

    while (!pq.empty())
    {
        pair<long long int, long long int> parent = pq.top();
        pq.pop();
        int cost = parent.first;
        int node = parent.second;

        if (cost > dis[node])
            continue;

        for (pair<int, int> child : v[node])
        {
            int childNode = child.first;
            int childCost = child.second;

            if (dis[node] != INT_MAX && dis[node] + childCost < dis[childNode])
            {
                dis[childNode] = dis[node] + childCost;
                pq.push({dis[childNode], childNode});
            }
        }
    }
}

int main()
{
    int n, e;
    cin >> n >> e;
    while (e--)
    {
        int a, b, w;
        cin >> a >> b >> w;
        v[a].push_back({b, w});
    }

    int src;
    cin >> src;
    for (int i = 1; i <= n; i++)
    {
        dis[i] = INT_MAX;
    }
    dijkstra(src, n);

    int t;
    cin >> t;
    while (t--)
    {
        int d, dw;
        cin >> d >> dw;

        if (dis[d] <= dw)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}