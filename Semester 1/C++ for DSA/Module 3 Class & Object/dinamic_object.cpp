#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int role;
    double cgpa;
    Student(int role, double cgpa)
    {
        this->role = role;
        this->cgpa = cgpa;
    }
};

Student *fun()
{
    Student *rakib = new Student(2, 4.01);
    return rakib;
};

int main()
{
    Student *rakib = fun();
    Student *sakib = new Student(3, 3.01);

    cout << "{" << endl
         << "role: " << rakib->role << endl
         << "cgpa: " << rakib->cgpa << endl
         << "}" << endl
         << "{" << endl
         << "role: " << sakib->role << endl
         << "cgpa: " << sakib->cgpa << endl
         << "}" << endl;

    delete rakib;
    delete sakib;

    return 0;
}