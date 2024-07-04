#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void insert_tail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = newNode;
}

void same_or_not(Node *head, Node *head2)
{
    Node *tmp = head;
    Node *tmp2 = head2;
    Node *tmpc = head;
    Node *tmp2c = head2;

    int count = 0, count2 = 0;
    while (tmpc != NULL)
    {
        count++;
        tmpc = tmpc->next;
    }
    while (tmp2c != NULL)
    {
        count2++;
        tmp2c = tmp2c->next;
    }
    if (count != count2)
    {
        cout << "NO";
        return;
    }

    bool flag = true;
    while (tmp != NULL)
    {
        if (tmp->val != tmp2->val)
        {
            flag = false;
            break;
        }
        tmp = tmp->next;
        tmp2 = tmp2->next;
    }
    if (flag)
        cout << "YES";
    else
        cout << "NO";
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;
    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
            break;
        insert_tail(head, tail, val);
    }

    Node *head2 = NULL;
    Node *tail2 = NULL;
    int val2;
    while (true)
    {
        cin >> val2;
        if (val2 == -1)
            break;
        insert_tail(head2, tail2, val2);
    }
    same_or_not(head, head2);

    return 0;
}