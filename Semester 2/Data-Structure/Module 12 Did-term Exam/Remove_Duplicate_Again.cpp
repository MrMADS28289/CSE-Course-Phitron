#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> dList;
    while (true)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        dList.push_back(val);
    }
    dList.sort();
    dList.unique();
    for (int val : dList)
    {
        cout << val << " ";
    }

    return 0;
}