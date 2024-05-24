#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int t = 0; t < test; t++)
    {
        int n, s;
        cin >> n >> s;
        int a[n];

        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        bool isTrue = false;
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                for (int k = j + 1; k < n; k++)
                {
                    int sum = a[i] + a[j] + a[k];
                    if (sum == s)
                    {
                        isTrue = true;
                    }
                }
            }
        }
        if (isTrue)
        {
            cout << "YES";
        }
        else
        {
            cout << "NO";
        }
        cout << endl;
    }

    return 0;
}