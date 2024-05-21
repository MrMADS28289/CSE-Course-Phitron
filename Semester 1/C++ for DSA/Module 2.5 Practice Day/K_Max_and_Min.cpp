#include <bits/stdc++.h>
using namespace std;

int main()
{
    int ar[3];
    for (int i = 0; i < 3; i++)
    {
        cin >> ar[i];
    }

    int mn = INT_MAX;
    int mx = INT_MIN;
    for (int i = 0; i < 3; i++)
    {
        if (ar[i] > mx)
        {
            mx = ar[i];
        }
        if (ar[i] < mn)
        {
            mn = ar[i];
        }
    }
    cout << mn << " " << mx;

    return 0;
}