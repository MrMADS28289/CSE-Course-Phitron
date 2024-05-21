#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    for (int i = 0; i < n; i++)
    {
        for (int ii = i; ii < n; ii++)
        {
            if (ar[i] > ar[ii])
            {
                swap(ar[i], ar[ii]);
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
    }

    return 0;
}