#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    char name[100];
    int role;
    double cgpa;
};

int main()
{
    Student rakib, shakib;
    cin.getline(rakib.name, 100);
    cin >> rakib.role >> rakib.cgpa;
    getchar();
    cin.getline(shakib.name, 100);
    cin >> shakib.role >> shakib.cgpa;

    cout << "{" << endl
         << "name: " << rakib.name << endl
         << "role: " << rakib.role << endl
         << "cgpa: " << rakib.cgpa << endl
         << "}" << endl
         << "{" << endl
         << "name: " << shakib.name << endl
         << "role: " << shakib.role << endl
         << "cgpa: " << shakib.cgpa << endl
         << "}" << endl;

    return 0;
}