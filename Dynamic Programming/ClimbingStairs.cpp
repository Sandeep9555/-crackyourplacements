class Solution
{
public:
    int climbStairs(int n)
    {
        int sprev = 1;
        int prev = 1;
        for (int i = 2; i <= n; i++)
        {
            int curr = sprev + prev;
            sprev = prev;
            prev = curr;
        }
        return prev;
    }
};