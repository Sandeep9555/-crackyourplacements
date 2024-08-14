class Solution
{
public:
    bool hasCycle(ListNode *head)
    {
        ListNode *walk = head;
        ListNode *run = head;
        while (run != NULL && run->next != NULL)
        {
            walk = walk->next;
            run = run->next->next;
            if (walk == run)
            {
                return true;
            }
        }
        return false;
    }
};