#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (0 > v[i])
            cout << 2 << " ";
        else if (0 < v[i])
            cout << 1 << " ";
        else
            cout << 0 << " ";
    }
    return 0;
}