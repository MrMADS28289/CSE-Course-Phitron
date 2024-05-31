#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);

    // Solution #1
    // stringstream ss(s);
    // string word;
    // int count = 0;
    // while (ss >> word)
    // {
    //     if (word[0] >= 'a' && word[0] <= 'z')
    //         count++;
    //     else if (word[0] >= 'A' && word[0] <= 'Z')
    //         count++;
    // }
    // cout << count;

    // Solution #2
    bool in_word = false;
    int count = 0;
    for (char c : s)
    {
        if (isalpha(c))
        {
            if (in_word == false)
                count++;
            in_word = true;
        }
        else
            in_word = false;
    }
    cout << count;

    return 0;
}