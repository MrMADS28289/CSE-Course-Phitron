#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
};

int main()
{
    int n;
    cin >> n;
    Student std[n];
    for (int i = 0; i < n; i++)
    {
        cin >> std[i].nm >> std[i].cls >> std[i].s >> std[i].id;
    }
    int j = n - 1;
    for (int i = 0; i < abs(n / 2); i++)
    {
        swap(std[i].s, std[j].s);
        j--;
    }
    for (int i = 0; i < n; i++)
    {
        cout << std[i].nm << " " << std[i].cls << " " << std[i].s << " " << std[i].id << endl;
    }

    return 0;
}