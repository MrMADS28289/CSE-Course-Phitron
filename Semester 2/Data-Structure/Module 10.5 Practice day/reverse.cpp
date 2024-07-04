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

void reverse(Node *head, Node *tail)
{
    Node *tHead = head;
    Node *tTail = tail;
    while (tHead != tTail && tHead->next != tTail)
    {
        swap(tHead->val, tTail->val);
        tHead = tHead->next;
        tTail = tTail->pre;
    }
    swap(tHead->val, tTail->val);
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
    reverse(head, tail);
    printLL(head);

    return 0;
}