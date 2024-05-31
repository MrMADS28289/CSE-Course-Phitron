#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int t = 0; t < test; t++)
    {
        string s, x;
        cin >> s >> x;
        while (s.find(x) != -1)
        {
            s.replace(s.find(x), x.size(), "#");
        }
        cout << s << endl;
    }

    return 0;
}