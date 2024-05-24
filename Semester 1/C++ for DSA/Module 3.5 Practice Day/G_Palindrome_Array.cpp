#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int j = n - 1;
    int flag = 1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != a[j])
            flag = 0;
        j--;
    }
    if (flag == 1)
    {
        cout << "YES";
    }
    else
        cout << "NO";

    return 0;
}