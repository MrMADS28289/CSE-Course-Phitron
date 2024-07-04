#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *pre;
    Node *next;
    Node(int val)
    {
        this->val = val;
        this->pre = NULL;
        this->next = NULL;
    }
};

int size(Node *head)
{
    Node *tmp = head;
    int cnt = 0;
    while (tmp != NULL)
    {
        cnt++;
        tmp = tmp->next;
    }
    return cnt;
}

void insertTail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (tail == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->pre = tail;
    tail = newNode;
}

void sameOrNot(Node *head, Node *head2)
{
    if (size(head) != size(head2))
    {
        cout << "NO";
        return;
    }

    Node *tmp = head;
    Node *tmp2 = head2;
    bool flag = true;
    while (tmp != NULL)
    {
        if (tmp->val != tmp2->val)
            flag = false;
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
    Node *head2 = NULL;
    Node *tail2 = NULL;

    while (1)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        insertTail(head, tail, val);
    }
    while (1)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        insertTail(head2, tail2, val);
    }
    sameOrNot(head, head2);

    return 0;
}