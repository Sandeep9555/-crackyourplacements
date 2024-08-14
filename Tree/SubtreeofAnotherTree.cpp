class Solution
{
public:
    bool check(TreeNode *root1, TreeNode *root2)
    {
        if (root1 == nullptr && root2 == nullptr)
        {
            return true;
        }
        if (root1 == nullptr || root2 == nullptr)
        {
            return false;
        }
        bool left = check(root1->left, root2->left);
        bool right = check(root1->right, root2->right);
        return (root1->val == root2->val) && (left && right);
    }
    bool isSubtree(TreeNode *root, TreeNode *subRoot)
    {
        if (root == nullptr)
        {
            return false;
        }
        if (check(root, subRoot))
        {
            return true;
        }
        return isSubtree(root->left, subRoot) || isSubtree(root->right, subRoot);
    }
};