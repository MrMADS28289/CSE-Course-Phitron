#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    while (s.find("EGYPT") != -1)
    {
        s.replace(s.find("EGYPT"), 5, " ");
    }
    cout << s;

    return 0;
}

// *** improved version ***

// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     string s;
//     getline(cin, s);

//     int pos;
//     while ((pos = s.find("EGYPT")) != -1) {
//         s.replace(pos, 5, " ");
//     }

//     cout << s;

//     return 0;
// }
