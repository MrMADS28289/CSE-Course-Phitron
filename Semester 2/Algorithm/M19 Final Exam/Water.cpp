#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int h[n];
        for (int i = 0; i < n; i++)
        {
            cin >> h[i];
        }
        pair<int, int> lh, rh;
        lh.second = INT_MIN;
        rh.second = INT_MIN;
        for (int i = 0; i < n; i++)
        {
            if (h[i] > lh.second)
            {
                lh.first = i;
                lh.second = h[i];
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (h[i] < lh.second && h[i] > rh.second)
            {
                rh.first = i;
                rh.second = h[i];
            }
        }
        if (lh.first < rh.first)
            cout << lh.first << " " << rh.first << endl;
        else
            cout << rh.first << " " << lh.first << endl;
    }

    return 0;
}