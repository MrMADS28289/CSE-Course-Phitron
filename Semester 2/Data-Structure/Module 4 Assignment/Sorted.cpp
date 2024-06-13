#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int t = 0; t < test; t++)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        bool isSorted = true;
        for (int i = 0; i < n; i++)
        {
            if (i < n - 1 && a[i] > a[i + 1])
            {
                isSorted = false;
                break;
            }
        }
        if (isSorted)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}