class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        if (head->next == nullptr && n == 1)
        {
            return nullptr;
        }
        int count = 0;
        ListNode *curr = head;
        while (curr != nullptr)
        {
            count++;
            curr = curr->next;
        }
        if (count == n)
        {
            return head->next;
        }
        int fcount = count - n;
        curr = head;
        ListNode *prev = nullptr;
        while (fcount)
        {
            prev = curr;
            curr = curr->next;
            fcount--;
        }
        prev->next = curr->next;
        curr->next = nullptr;
        return head;
    }
};