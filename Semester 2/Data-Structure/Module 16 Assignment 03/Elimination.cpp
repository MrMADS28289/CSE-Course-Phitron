#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test;
    cin >> test;

    for (int t = 0; t < test; t++)
    {
        stack<char> st;
        string str;
        cin >> str;
        for (char c : str)
        {
            if (st.empty())
                st.push(c);
            else
            {
                if (st.top() == '0' && c == '1')
                    st.pop();
                else
                    st.push(c);
            }
        }
        if (st.empty())
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}