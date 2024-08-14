class Solution
{
public:
    ListNode *partition(ListNode *head, int x)
    {
        ListNode *lesser = new ListNode(0);
        ListNode *greater = new ListNode(0);
        ListNode *lesstemp = lesser;
        ListNode *greattemp = greater;
        while (head != nullptr)
        {
            if (head->val < x)
            {
                lesstemp->next = head;
                lesstemp = lesstemp->next;
            }
            else
            {
                greattemp->next = head;
                greattemp = greattemp->next;
            }
            head = head->next;
        }
        lesstemp->next = greater->next;
        greattemp->next = nullptr;
        ListNode *result = lesser->next;
        return result;
    }
};