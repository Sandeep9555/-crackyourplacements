class Solution
{
public:
    TreeNode *invertTree(TreeNode *root)
    {
        if (root == nullptr)
        {
            return nullptr;
        }
        swap(root->left, root->right);
        if (root->left)
        {
            invertTree(root->left);
        }
        if (root->right)
        {
            invertTree(root->right);
        }
        return root;
    }
};