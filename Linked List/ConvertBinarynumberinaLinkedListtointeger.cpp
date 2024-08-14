class Solution
{
public:
    int getDecimalValue(ListNode *head)
    {
        vector<int> v;
        ListNode *curr = head;
        while (curr != NULL)
        {
            v.push_back(curr->val);
            curr = curr->next;
        }
        int result = 0;
        for (int i = 0; i < v.size(); i++)
        {
            result += v[i] * pow(2, v.size() - i - 1);
        }
        return result;
    }
};