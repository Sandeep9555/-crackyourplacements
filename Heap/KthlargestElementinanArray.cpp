class Solution
{
public:
    int findKthLargest(vector<int> &nums, int k)
    {
        // sort(nums.begin(),nums.end());
        priority_queue<int> pq(nums.begin(), nums.end());
        int result = 0;
        for (int i = 0; i < k; i++)
        {
            result = pq.top();
            pq.pop();
        }
        return result;
    }
};