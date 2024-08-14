
class Solution
{
public:
    int findPair(int n, int x, vector<int> &arr)
    {
        // code here
        sort(arr.begin(), arr.end());
        int left = 0;
        int right = 1;
        while (left < n && right < n)
        {
            int diff = arr[right] - arr[left];
            if ((left != right) && (diff == x))
            {
                return 1;
            }
            else if (diff < x)
            {
                right++;
            }
            else
            {
                left++;
            }
        }
        return -1;
    }
};