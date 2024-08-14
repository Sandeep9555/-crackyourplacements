class Solution
{
public:
    ListNode *removeElements(ListNode *head, int val)
    {
        while (head != nullptr && head->val == val)
        {
            ListNode *temp = head;
            head = head->next;
            delete temp;
        }
        ListNode *curr = head;
        while (curr != nullptr && curr->next != nullptr)
        {
            if (curr->next->val == val)
            {
                ListNode *prev = curr->next;
                curr->next = curr->next->next;
                delete prev;
            }
            else
            {
                curr = curr->next;
            }
        }
        return head;
    }
};