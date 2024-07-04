#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    list<int> qList;
    while (n--)
    {
        int x, v;
        cin >> x >> v;
        list<int> rList;
        if (x == 0)
            qList.push_front(v);
        else if (x == 1)
            qList.push_back(v);
        else if (v < qList.size())
        {
            qList.erase(next(qList.begin(), v));
        }
        cout << "L -> ";
        for (int val : qList)
        {
            cout << val << " ";
        }
        cout << endl;
        rList.assign(qList.begin(), qList.end());
        rList.reverse();
        cout << "R -> ";
        for (int val : rList)
        {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}