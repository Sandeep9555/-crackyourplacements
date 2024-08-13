class Solution
{
public:
    int maxProfit(vector<int> &arr)
    {
        int n = arr.size();
        int mini = arr[0];
        int profit = 0;
        for (int i = 1; i < n; i++)
        {
            mini = min(mini, arr[i]);
            int sell = arr[i] - mini;
            profit = max(profit, sell);
        }
        return profit;
    }
};