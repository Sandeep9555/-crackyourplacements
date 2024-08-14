class Solution
{
public:
    ListNode *reverseLL(ListNode *head)
    {
        if (head == nullptr)
            return head;
        ListNode *temp = head;
        ListNode *prev = nullptr;
        while (temp != nullptr)
        {
            ListNode *front = temp->next;
            temp->next = prev;
            prev = temp;
            temp = front;
        }
        return prev;
    }
    bool isPalindrome(ListNode *head)
    {
        if (head == nullptr || head->next == nullptr)
        {
            return true;
        }
        ListNode *slow = head;
        ListNode *fast = head;
        while (fast->next != nullptr && fast->next->next != nullptr)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode *newHead = reverseLL(slow->next);
        ListNode *t1 = head;
        while (newHead != nullptr)
        {
            if (t1->val != newHead->val)
            {
                return false;
            }
            else
            {
                t1 = t1->next;
                newHead = newHead->next;
            }
        }
        return true;
    }
};