class Solution
{
public:
    int majorityElement(vector<int> &nums)
    {
        int n = nums.size();
        int mejority = n / 2;
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[nums[i]]++;
        }
        for (auto it : mp)
        {
            if (it.second > mejority)
            {
                return it.first;
            }
        }
        return -1;
    }
};