class Solution
{
public:
    int diameterOfBinaryTree(TreeNode *root)
    {
        int diameter = 0;
        height(root, diameter);
        return diameter;
    }

private:
    int height(TreeNode *root, int &diameter)
    {
        if (root == nullptr)
        {
            return 0;
        }

        int leftHeight = height(root->left, diameter);
        int rightHeight = height(root->right, diameter);

        diameter = max(diameter, leftHeight + rightHeight);

        return 1 + max(leftHeight, rightHeight);
    }
};
