#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
};

bool cmp(Student x, Student y)
{
    if (x.eng_marks == y.eng_marks)
    {
        if (x.math_marks == y.math_marks)
            return x.id < y.id;
        else
            return x.math_marks > y.math_marks;
    }
    else
    {
        return x.eng_marks > y.eng_marks;
    }
}

int main()
{
    int n;
    cin >> n;
    Student std[n];
    for (int i = 0; i < n; i++)
    {
        cin >> std[i].nm >> std[i].cls >> std[i].s >> std[i].id >> std[i].math_marks >> std[i].eng_marks;
    }
    sort(std, std + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << std[i].nm << " " << std[i].cls << " " << std[i].s << " " << std[i].id << " " << std[i].math_marks << " " << std[i].eng_marks << endl;
    }

    return 0;
}