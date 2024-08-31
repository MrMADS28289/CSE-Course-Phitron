#include <bits/stdc++.h>
using namespace std;

class A
{
public:
    string s;
    int i;
    A(string s, int i)
    {
        this->s = s;
        this->i = i;
    }
};

bool cmp(A a, A b)
{
    if (a.s == b.s)
        return a.i > b.i;
    return a.s < b.s;
}

int main()
{
    int n;
    cin >> n;
    vector<A> v;

    for (int j = 0; j < n; j++)
    {
        string s;
        int i;
        cin >> s >> i;
        A obj(s, i);
        v.push_back(obj);
    }

    sort(v.begin(), v.end(), cmp);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].s << " " << v[i].i << endl;
    }

    return 0;
}
