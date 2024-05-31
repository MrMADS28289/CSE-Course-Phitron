#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string word;
    bool present = false;
    while (ss >> word)
    {
        if (word == "Jessica")
            present = true;
    }
    if (present)
        cout << "YES";
    else
        cout << "NO";

    return 0;
}