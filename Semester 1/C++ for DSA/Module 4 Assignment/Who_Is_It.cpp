#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int ID;
    char name[100];
    char section;
    int marks;
};

int main()
{
    int test;
    cin >> test;
    for (int t = 0; t < test; t++)
    {
        Student sakib, rakib, akib;
        cin >> sakib.ID >> sakib.name >> sakib.section >> sakib.marks;
        cin >> rakib.ID >> rakib.name >> rakib.section >> rakib.marks;
        cin >> akib.ID >> akib.name >> akib.section >> akib.marks;

        if (sakib.marks > rakib.marks && sakib.marks > akib.marks)
        {
            cout << sakib.ID << " " << sakib.name << " " << sakib.section << " " << sakib.marks << endl;
        }
        else if (rakib.marks > sakib.marks && rakib.marks > akib.marks)
        {
            cout << rakib.ID << " " << rakib.name << " " << rakib.section << " " << rakib.marks << endl;
        }
        else if (akib.marks > rakib.marks && akib.marks > sakib.marks)
        {
            cout << akib.ID << " " << akib.name << " " << akib.section << " " << akib.marks << endl;
        }
        else
        {
            if (sakib.marks == rakib.marks && sakib.marks == akib.marks)
            {
                cout << sakib.ID << " " << sakib.name << " " << sakib.section << " " << sakib.marks << endl;
            }
            else if (sakib.marks == rakib.marks)
            {
                cout << sakib.ID << " " << sakib.name << " " << sakib.section << " " << sakib.marks << endl;
            }
            else if (sakib.marks == akib.marks)
            {
                cout << sakib.ID << " " << sakib.name << " " << sakib.section << " " << sakib.marks << endl;
            }
            else if (rakib.marks == sakib.marks)
            {
                cout << sakib.ID << " " << sakib.name << " " << sakib.section << " " << sakib.marks << endl;
            }
            else if (rakib.marks == akib.marks)
            {
                cout << rakib.ID << " " << rakib.name << " " << rakib.section << " " << rakib.marks << endl;
            }
            else if (akib.marks == sakib.marks)
            {
                cout << sakib.ID << " " << sakib.name << " " << sakib.section << " " << sakib.marks << endl;
            }
            else if (akib.marks == rakib.marks)
            {
                cout << akib.ID << " " << akib.name << " " << akib.section << " " << akib.marks << endl;
            }
        }
    }

    return 0;
}