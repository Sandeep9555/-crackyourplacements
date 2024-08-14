class Solution
{
public:
    int maxLen(vector<int> &arr, int n)
    {
        int maxLength = 0;
        unordered_map<int, int> sumIndexMap;
        int sum = 0;

        for (int i = 0; i < n; ++i)
        {
            sum += arr[i];

            if (sum == 0)
            {
                maxLength = i + 1;
            }
            else if (sumIndexMap.find(sum) != sumIndexMap.end())
            {
                maxLength = max(maxLength, i - sumIndexMap[sum]);
            }
            else
            {
                sumIndexMap[sum] = i;
            }
        }

        return maxLength;
    }