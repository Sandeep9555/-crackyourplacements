class Solution
{
public:
    void dfs(TreeNode *node, int low, int high, int &sum)
    {
        if (node == nullptr)
            return;

        if (node->val >= low && node->val <= high)
        {
            sum += node->val;
        }

        if (node->val > low)
        {
            dfs(node->left, low, high, sum);
        }

        if (node->val < high)
        {
            dfs(node->right, low, high, sum);
        }
    }

    int rangeSumBST(TreeNode *root, int low, int high)
    {
        int sum = 0;
        dfs(root, low, high, sum);
        return sum;
    }
};