class Solution
{
public:
    ListNode *reverse(ListNode *head)
    {
        ListNode *curr = head;
        ListNode *prev = nullptr;
        while (curr != nullptr)
        {
            ListNode *next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    ListNode *addTwoNumbers(ListNode *l1, ListNode *l2)
    {
        ListNode *curr1 = reverse(l1);
        ListNode *curr2 = reverse(l2);
        int carry = 0;
        ListNode *dummy = new ListNode(0);
        ListNode *temp = dummy;

        while (curr1 != nullptr || curr2 != nullptr || carry != 0)
        {
            int sum = carry;

            if (curr1 != nullptr)
            {
                sum += curr1->val;
                curr1 = curr1->next;
            }

            if (curr2 != nullptr)
            {
                sum += curr2->val;
                curr2 = curr2->next;
            }

            carry = sum / 10;
            int node = sum % 10;

            temp->next = new ListNode(node);
            temp = temp->next;
        }

        ListNode *result = dummy->next;
        delete dummy;
        ListNode *ans = reverse(result);
        return ans;
    }
};
