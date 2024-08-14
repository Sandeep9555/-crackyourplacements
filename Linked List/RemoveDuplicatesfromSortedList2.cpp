class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head)
    {
        ListNode *dummy = new ListNode(0);
        ListNode *temp = dummy;
        ListNode *curr = head;

        while (curr != nullptr)
        {
            if (curr->next == nullptr || curr->val != curr->next->val)
            {
                temp->next = curr;
                temp = temp->next;
            }
            else
            {
                while (curr->next != nullptr && curr->val == curr->next->val)
                {
                    curr = curr->next;
                }
                temp->next = curr->next;
            }
            curr = curr->next;
        }

        // temp->next = nullptr;

        return dummy->next;
    }
};