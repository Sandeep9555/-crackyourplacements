#include <iostream>
#include <vector>
#include <map>
#include <string>
using namespace std;

class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        int n = nums.size();
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            mp[nums[i]]++;
        }
        for (auto i : mp)
        {
            if (i.second >= 2)
            {
                return i.first;
            }
        }
        return -1;
    }
};