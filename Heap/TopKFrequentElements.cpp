class Solution
{
public:
    struct Compare
    {
        bool operator()(const pair<int, int> &a, const pair<int, int> &b) const
        {
            return a.second > b.second;
        };
    };
    vector<int> topKFrequent(vector<int> &nums, int k)
    {
        int n = nums.size();
        unordered_map<int, int> mp;
        for (auto i : nums)
        {
            mp[i]++;
        }
        vector<pair<int, int>> v(mp.begin(), mp.end());
        sort(v.begin(), v.end(), Compare());
        vector<int> ans;
        for (int i = 0; i < k; i++)
        {
            ans.push_back(v[i].first);
        }
        return ans;
    }
};