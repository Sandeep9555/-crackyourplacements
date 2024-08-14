class Solution
{
public:
    TreeNode *sortedArrayToBST(vector<int> &nums)
    {
        return helper(0, nums.size() - 1, nums);
    }

    TreeNode *helper(int l, int r, vector<int> nums)
    {
        if (l > r)
            return nullptr;

        int mid = l + (r - l) / 2;
        TreeNode *root = new TreeNode(nums[mid], helper(l, mid - 1, nums), helper(mid + 1, r, nums));

        return root;
    }
};
