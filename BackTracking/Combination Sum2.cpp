class Solution
{
public:
    void solve(int ind, vector<vector<int>> &result, vector<int> &arr, int target, vector<int> &ds)
    {
        if (target == 0)
        {
            result.push_back(ds);
            return;
        }
        for (int i = ind; i < arr.size(); i++)
        {
            if (i > ind && arr[i] == arr[i - 1])
            {
                continue;
            }
            if (arr[i] > target)
            {
                break;
            }
            ds.push_back(arr[i]);
            solve(i + 1, result, arr, target - arr[i], ds);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int> &candidates, int target)
    {
        sort(candidates.begin(), candidates.end());
        vector<int> ds;
        int n = candidates.size();
        vector<vector<int>> result;
        solve(0, result, candidates, target, ds);
        return result;
    }
};