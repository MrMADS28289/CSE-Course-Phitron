#include <bits/stdc++.h>
using namespace std;

class myStack
{
public:
    list<int> l;
    void push(int val)
    {
        l.push_back(val);
    }
    void pop()
    {
        l.pop_back();
    }
    int top()
    {
        return l.back();
    }
    int size()
    {
        return l.size();
    }
    bool empty()
    {
        return l.empty();
    }
};

int main()
{
    int n;
    cin >> n;
    myStack st, st2;
    while (n--)
    {
        int v;
        cin >> v;
        st.push(v);
    }
    int n2;
    cin >> n2;
    while (n2--)
    {
        int v;
        cin >> v;
        st2.push(v);
    }
    if (st.size() == st2.size())
    {
        bool same = true;
        while (!st.empty())
        {
            int stV = st.top();
            int stV2 = st2.top();
            if (stV != stV2)
            {
                same = false;
                break;
            }
            st.pop();
            st2.pop();
        }
        if (same)
            cout << "YES";
        else
            cout << "NO";
    }
    else
        cout << "NO";

    cout << endl;

    return 0;
}