class Solution
{
public:
    int size(ListNode *head)
    {
        ListNode *tmp = head;
        int cnt = 0;
        while (tmp != NULL)
        {
            cnt++;
            tmp = tmp->next;
        }
        return cnt;
    }
    void printLL(ListNode *head)
    {
        ListNode *tmp = head;
        while (tmp != NULL)
        {
            cout << tmp->val << " ";
            tmp = tmp->next;
        }
    }
    void deleteHead(ListNode *&head)
    {
        head = head->next;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB)
    {
        if (size(headA) > size(headB))
        {
            int skip = size(headA) - size(headB);
            ListNode *tmp = headA;
            while (skip--)
            {
                deleteHead(headA);
                cout << "skp" << skip;
            }
        }
        else
        {
            int skip = size(headB) - size(headA);
            ListNode *tmp = headB;
            while (skip--)
            {
                deleteHead(headB);
                cout << "skp" << skip;
            }
        }
        ListNode *tmp = headA;
        ListNode *tmp2 = headB;
        while (tmp != NULL)
        {
            if (tmp == tmp2)
            {
                return tmp;
            }
        }
        cout << endl;
        printLL(headA);
        cout << endl;
        printLL(headB);

        return headA;
    }
};