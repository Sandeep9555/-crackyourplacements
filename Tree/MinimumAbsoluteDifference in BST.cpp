class Solution
{
public:
    void inorder(TreeNode *root, vector<int> &v)
    {
        if (root == nullptr)
        {
            return;
        }
        inorder(root->left, v);
        v.push_back(root->val);
        inorder(root->right, v);
    }
    int getMinimumDifference(TreeNode *root)
    {
        vector<int> v;
        inorder(root, v);
        sort(v.begin(), v.end());
        int n = v.size();
        int diff = INT_MAX;
        for (int i = 0; i < n - 1; i++)
        {
            int def = v[i + 1] - v[i];
            diff = min(def, diff);
        }
        return diff;
    }
};