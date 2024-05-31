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
    int total_marks()
    {
        return math_marks + eng_marks;
    }
};

bool cmp(Student x, Student y)
{
    int x_total = x.total_marks();
    int y_total = y.total_marks();
    if (x_total == y_total)
    {
        return x.id < y.id;
    }
    else
    {
        return x_total > y_total;
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