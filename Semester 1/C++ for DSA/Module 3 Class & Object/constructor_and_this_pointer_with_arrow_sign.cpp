#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    int role;
    double cgpa;
    Student(int role, double cgpa)
    {
        // -> pinter *...
        // (*this).role = role;
        // (*this).cgpa = cgpa;
        this->role = role;
        this->cgpa = cgpa;
    }
};

int main()
{
    Student rakib(2, 4.01);
    Student sakib(3, 3.01);

    cout << "{" << endl
         << "role: " << rakib.role << endl
         << "cgpa: " << rakib.cgpa << endl
         << "}" << endl;
    cout << "{" << endl
         << "role: " << sakib.role << endl
         << "cgpa: " << sakib.cgpa << endl
         << "}" << endl;

    return 0;
}