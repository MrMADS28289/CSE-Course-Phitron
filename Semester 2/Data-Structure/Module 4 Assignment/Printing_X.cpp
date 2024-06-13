#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << "X";
    }
    else
    {
        int ms = n - 2, ss = 0;
        for (int i = 0; i < n / 2; i++)
        {
            for (int j = 0; j < ss; j++)
            {
                cout << " ";
            }
            cout << "\\";
            for (int j = 0; j < ms; j++)
            {
                cout << " ";
            }
            cout << "/" << endl;
            if (i + 1 != n / 2)
            {
                ms -= 2;
                ss++;
            }
        }
        for (int j = 0; j < ss + 1; j++)
        {
            cout << " ";
        }
        cout << "X" << endl;
        for (int i = 0; i < n / 2; i++)
        {
            for (int j = 0; j < ss; j++)
            {
                cout << " ";
            }
            cout << "/";
            for (int j = 0; j < ms; j++)
            {
                cout << " ";
            }
            cout << "\\" << endl;
            ms += 2;
            ss--;
        }
    }

    return 0;
}