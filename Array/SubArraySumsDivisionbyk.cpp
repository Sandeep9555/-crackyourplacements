class Solution
{
public:
    int subarraysDivByK(vector<int> &nums, int k)
    {
        int n = nums.size();
        unordered_map<int, int> mp;
        mp[0] = 1;
        int result = 0;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum = ((sum + nums[i]) % k + k) % k;
            if (mp.count(sum))
            {
                result += mp[sum];
            }
            mp[sum]++;
        }
        return result;
    }
};