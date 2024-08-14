class solution
{
public:
    long long multiplyTwoLists(Node *first, Node *second)
    {
        // code here
        long long ans1 = 0;
        long long ans2 = 0;
        int mod = 1000000007;
        while (first || second)
        {
            if (first)
            {
                ans1 = (ans1 * 10) % mod + (first->data) % mod;
                first = first->next;
            }
            if (second)
            {
                ans2 = (ans2 * 10) % mod + (second->data) % mod;
                second = second->next;
            }
        }
        return (ans1 % mod * ans2 % mod) % mod;
    }
};