class Solution
{
public:
    ListNode *reverseBetween(ListNode *head, int left, int right)
    {
        ListNode *curr = head;
        ListNode *dummy = new ListNode(0);
        dummy->next = head;
        ListNode *leftPrev = dummy;
        for (int i = 0; i < left - 1; i++)
        {
            leftPrev = curr;
            curr = curr->next;
        }
        ListNode *prev = nullptr;
        for (int i = left; i <= right; i++)
        {
            ListNode *next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        leftPrev->next->next = curr;
        leftPrev->next = prev;
        return dummy->next;
    }
};