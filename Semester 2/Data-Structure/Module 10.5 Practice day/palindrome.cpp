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

void palindrom(Node *head, Node *tail)
{
    Node *tHead = head;
    Node *tTail = tail;
    bool flag = true;
    while (tHead != NULL)
    {
        if (tHead->val != tTail->val)
            flag = false;
        tHead = tHead->next;
        tTail = tTail->pre;
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

    while (1)
    {
        int val;
        cin >> val;
        if (val == -1)
            break;
        insertTail(head, tail, val);
    }
    palindrom(head, tail);

    return 0;
}