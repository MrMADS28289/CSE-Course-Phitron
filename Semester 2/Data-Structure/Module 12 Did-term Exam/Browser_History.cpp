#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    string val;
    Node *pre;
    Node *next;
    Node(string val)
    {
        this->val = val;
        this->pre = NULL;
        this->next = NULL;
    }
};

void insertTail(Node *&head, Node *&tail, string val)
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

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    while (1)
    {
        string web;
        cin >> web;
        if (web == "end")
            break;
        insertTail(head, tail, web);
    }

    int q;
    cin >> q;
    Node *tmp = head;
    while (q--)
    {
        string comm;
        cin >> comm;
        if (comm == "visit")
        {
            string site;
            cin >> site;
            bool available = false;
            Node *tmp2 = head;
            while (tmp2 != NULL)
            {
                if (tmp2->val == site)
                {
                    available = true;
                    tmp = tmp2;
                    break;
                }
                tmp2 = tmp2->next;
            }

            if (available)
                cout << site << endl;
            else
                cout << "Not Available" << endl;
        }
        else if (comm == "prev")
        {
            if (tmp->pre != NULL)
            {
                tmp = tmp->pre;
                cout << tmp->val << endl;
            }
            else
                cout << "Not Available" << endl;
        }
        else if (comm == "next")
        {
            if (tmp->next != NULL)
            {
                tmp = tmp->next;
                cout << tmp->val << endl;
            }
            else
                cout << "Not Available" << endl;
        }
    }

    return 0;
}