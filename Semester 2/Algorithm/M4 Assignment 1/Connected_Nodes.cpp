#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, e;
    cin >> n >> e;
    vector<vector<int>> v(n);
    for (int i = 0; i < e; i++)
    {
        int a, b;
        cin >> a >> b;
        v[a].push_back(b);
        v[b].push_back(a);
    }

    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        if (v[x].empty())
        {
            cout << -1 << endl;
        }
        else
        {
            sort(v[x].begin(), v[x].end(), greater<int>());
            for (int i = 0; i < v[x].size(); i++)
            {
                cout << v[x][i] << " ";
            }
            cout << endl;
        }
    }

    return 0;
}