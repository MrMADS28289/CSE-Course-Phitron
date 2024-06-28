#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int t = 0; t < test; t++)
    {
        int n;
        cin.ignore();
        cin >> n;
        string match;
        int count[26] = {0};
        cin >> match;
        for (char m : match)
        {
            if (count[m - 'A'] == 0)
                count[m - 'A'] += 2;
            else
                count[m - 'A']++;
        }
        int sum = 0;
        for (int i = 'A'; i <= 'Z'; i++)
        {
            sum += count[i - 'A'];
        }
        cout << sum << endl;
    }

    return 0;
}