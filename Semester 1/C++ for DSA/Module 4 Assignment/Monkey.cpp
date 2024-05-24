#include <bits/stdc++.h>
using namespace std;

int main()
{
    char s[100005];
    while (cin.getline(s, 100005))
    {
        int count[26] = {0};
        int len = strlen(s);

        for (int i = 0; i < len; i++)
        {
            if (s[i] != ' ')
            {
                count[s[i] - 'a']++;
            }
        }

        for (int i = 0; i < 26; i++)
        {
            for (int j = 0; j < count[i]; j++)
            {
                cout << (char)('a' + i);
            }
        }
        cout << endl;
    }

    return 0;
}