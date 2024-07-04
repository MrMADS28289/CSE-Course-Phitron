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

void printLL(Node *head, Node *tail, int order)
{
    if (order)
    {
        Node *tmp = head;
        while (tmp != NULL)
        {
            cout << tmp->val << " ";
            tmp = tmp->next;
        }
    }
    else
    {
        Node *tmp = tail;
        while (tmp != NULL)
        {
            cout << tmp->val << " ";
            tmp = tmp->pre;
        }
    }
}

void insertAtPosition(Node *&head, Node *&tail, int position, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    if (position == 0)
    {
        newNode->next = head;
        head->pre = newNode;
        head = newNode;
        return;
    }
    if (size(head) == position)
    {
        tail->next = newNode;
        newNode->pre = tail;
        tail = newNode;
        return;
    }
    Node *tmp = head;
    for (int i = 1; i < position; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    newNode->pre = tmp;
    tmp->next->pre = newNode;
    tmp->next = newNode;
}

int main()
{
    int t;
    cin >> t;
    Node *head = NULL;
    Node *tail = NULL;

    while (t--)
    {
        int x, v;
        cin >> x >> v;
        if (x > size(head))
        {
            cout << "Invalid" << endl;
            continue;
        }
        insertAtPosition(head, tail, x, v);
        printLL(head, tail, 1);
        cout << endl;
        printLL(head, tail, 0);
        cout << endl;
    }

    return 0;
}