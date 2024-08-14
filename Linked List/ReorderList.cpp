class Solution
{
public:
    void reorderList(ListNode *head)
    {
        stack<ListNode *> st;
        ListNode *curr = head;
        while (curr)
        {
            st.push(curr);
            curr = curr->next;
        }
        curr = head;
        int size = st.size() / 2;
        for (int i = 0; i < size; i++)
        {
            ListNode *last = st.top();
            st.pop();
            ListNode *next = curr->next;
            curr->next = last;
            last->next = next;
            curr = next;
        }
        curr->next = nullptr;
    }
};