#include <bits/stdc++.h>
using namespace std;

int main()
{
    // eida ki jani nah, discord grupe e Mahmud Pias vaiya use korte bolece, tai use korlam.
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // --------------

    int Q;
    cin >> Q;
    queue<string> que;
    for (int i = 0; i < Q; i++)
    {
        int comm;
        cin >> comm;
        if (comm == 0)
        {
            string person;
            cin >> person;
            que.push(person);
        }
        else
        {
            if (que.empty())
                cout << "Invalid" << endl;
            else
            {
                cout << que.front() << endl;
                que.pop();
            }
        }
    }

    return 0;
}