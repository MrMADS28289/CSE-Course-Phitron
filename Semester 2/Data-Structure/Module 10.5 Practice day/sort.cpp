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

void printLL(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
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

void sort(Node *head, Node *tail)
{
    for (Node *i = head; i != NULL; i = i->next)
    {
        Node *tmp = i->next;
        while (tmp != NULL)
        {
            if (i->val > tmp->val)
                swap(i->val, tmp->val);
            else
                tmp = tmp->next;
        }
    }
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
    sort(head, tail);
    printLL(head);

    return 0;
}