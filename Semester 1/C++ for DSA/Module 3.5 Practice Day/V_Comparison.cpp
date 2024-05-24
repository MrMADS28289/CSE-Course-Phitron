#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a;
    char s;
    cin >> s >> b;
    if (s == '>')
    {
        if (a > b)
        {
            cout << "Right";
        }
        else
        {
            cout << "Wrong";
        }
    }
    else if (s == '<')
    {
        if (a < b)
        {
            cout << "Right";
        }
        else
        {
            cout << "Wrong";
        }
    }
    else
    {
        if (a == b)
        {
            cout << "Right";
        }
        else
        {
            cout << "Wrong";
        }
    }

    return 0;
}