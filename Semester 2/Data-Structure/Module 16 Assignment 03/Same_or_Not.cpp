#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    queue<int> q;

    int n, m;
    cin >> n >> m;
    if (n != m)
        cout << "NO";
    else
    {
        while (n--)
        {
            int val;
            cin >> val;
            st.push(val);
        }
        while (m--)
        {
            int val;
            cin >> val;
            q.push(val);
        }
        bool flag = true;
        while (!st.empty())
        {
            if (st.top() != q.front())
                flag = false;
            st.pop();
            q.pop();
        }
        if (flag)
            cout << "YES";
        else
            cout << "NO";
    }

    return 0;
}