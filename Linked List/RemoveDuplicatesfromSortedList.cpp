class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        ListNode *curr = head;
        // ListNode* prev=nullptr;
        while (curr != nullptr && curr->next != nullptr)
        {
            if (curr->val == curr->next->val)
            {
                ListNode *temp = curr->next;
                curr->next = curr->next->next;
                delete temp;
            }
            else
            {
                curr = curr->next;
            }
        }
        return head;
    }
};