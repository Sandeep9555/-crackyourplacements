class Solution
{
public:
    vector<int> twoSum(vector<int> &nums, int target)
    {
        vector<int> v;
        unordered_map<int, int> mp;
        for (int j = 0; j < nums.size(); j++)
        {
            if (mp.find(target - nums[j]) != mp.end())
            {
                v.push_back(mp[target - nums[j]]);

                v.push_back(j);
            }
            mp.insert({nums[j], j});
        }

        return v;
    }
};
