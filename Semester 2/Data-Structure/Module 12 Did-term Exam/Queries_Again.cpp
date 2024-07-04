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
    int count = 0;
    while (tmp != NULL)
    {
        count++;
        tmp = tmp->next;
    }
    return count;
}

void insertHead(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }

    newNode->next = head;
    head->pre = newNode;
    head = newNode;
    return;
}

void insertTail(Node *&head, Node *&tail, int val)
{
    Node *newNode = new Node(val);
    tail->next = newNode;
    newNode->pre = tail;
    tail = newNode;
}

void insertAtPosition(Node *&head, Node *&tail, int val, int x)
{
    Node *newNode = new Node(val);
    Node *tmp = head;
    for (int i = 1; i < x; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    newNode->pre = tmp;
    tmp->next->pre = newNode;
    tmp->next = newNode;
}

void print_linked_list(Node *head, Node *tail, int order)
{
    if (order)
    {
        Node *tmp = head;
        cout << "L -> ";
        while (tmp != NULL)
        {
            cout << tmp->val << " ";
            tmp = tmp->next;
        }
        cout << endl;
    }
    else
    {
        Node *tmp = tail;
        cout << "R -> ";
        while (tmp != NULL)
        {
            cout << tmp->val << " ";
            tmp = tmp->pre;
        }
        cout << endl;
    }
}

int main()
{
    int n;
    cin >> n;
    Node *head = NULL;
    Node *tail = NULL;
    while (n--)
    {
        int x, v;
        cin >> x >> v;
        if (x > size(head))
        {
            cout << "Invalid" << '\n';
            continue;
        }
        else if (x == 0)
        {
            insertHead(head, tail, v);
        }
        else if (x == size(head))
        {
            insertTail(head, tail, v);
        }
        else
        {
            insertAtPosition(head, tail, v, x);
        }

        print_linked_list(head, tail, 1);
        print_linked_list(head, tail, 0);
    }

    return 0;
}