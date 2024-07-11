#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    queue<int> q;
    int n, n2;
    cin >> n;
    while (n--)
    {
        int v;
        cin >> v;
        st.push(v);
    }
    cin >> n2;
    while (n2--)
    {
        int v;
        cin >> v;
        q.push(v);
    }
    if (st.size() == q.size())
    {
        bool same = true;
        while (!st.empty())
        {
            int stV = st.top();
            int qV = q.front();
            if (stV != qV)
            {
                same = false;
                break;
            }
            st.pop();
            q.pop();
        }
        if (same)
            cout << "YES";
        else
            cout << "NO";
    }
    else
        cout << "NO";
    return 0;
}