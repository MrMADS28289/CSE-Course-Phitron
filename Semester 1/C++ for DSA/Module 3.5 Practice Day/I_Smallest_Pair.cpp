#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int tt = 0; tt < t; tt++)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        long long int mn = __INT_MAX__;
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                long long int sum = a[i] + a[j] + j - i;
                if (sum < mn)
                {
                    mn = sum;
                }
            }
        }
        cout << mn << endl;
    }

    return 0;
}