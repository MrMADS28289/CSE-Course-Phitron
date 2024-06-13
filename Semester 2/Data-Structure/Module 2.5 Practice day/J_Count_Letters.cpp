#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s;
    vector<int> v(26, 0);
    while (cin >> s)
    {
        v[s - 'a']++;
    }
    for (int i = 'a'; i <= 'z'; i++)
    {
        if (v[i - 'a'] != 0)
        {
            printf("%c : %d\n", i, v[i - 'a']);
        }
    }

    return 0;
}