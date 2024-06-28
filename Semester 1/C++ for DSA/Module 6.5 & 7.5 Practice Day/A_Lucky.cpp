#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;
    for (int t = 0; t < test; t++)
    {
        string numbers;
        cin >> numbers;
        int sum = 0;
        int sum2 = 0;
        for (int i = 0; i < 3; i++)
        {
            stringstream n;
            n << numbers[i];
            int num;
            n >> num;
            sum += num;
        }
        for (int i = 3; i < 6; i++)
        {
            stringstream n;
            n << numbers[i];
            int num;
            n >> num;
            sum2 += num;
        }
        if (sum == sum2)
            cout << "YES" << '\n';
        else
            cout << "NO" << endl;
    }

    return 0;
}