#include <bits/stdc++.h>
using namespace std;

class myStack
{
    list<int> x;

public:
    void push(int v)
    {
        x.push_back(v);
    }
    void pop()
    {
        x.pop_back();
    }
    int top()
    {
        return x.back();
    }
    int size()
    {
        return x.size();
    }
    bool empty()
    {
        return x.empty();
    }
};

class myQueue
{
    list<int> x;

public:
    void push(int v)
    {
        x.push_back(v);
    }
    void pop()
    {
        x.pop_front();
    }
    int front()
    {
        return x.front();
    }
    int size()
    {
        return x.size();
    }
    bool empty()
    {
        return x.empty();
    }
};

int main()
{
    myStack st;
    myQueue q;

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