class Solution
{
public:
    // bool isTrue(TreeNode* tree1,TreeNode* tree2){
    //     if(tree1==nullptr && tree2==nullptr){
    //         return true;
    //     }
    //     if(tree1==nullptr || tree2==nullptr){
    //         return false;
    //     }
    //     bool left=isTrue(tree1->left,tree2->right);
    //     bool right=isTrue(tree1->right,tree2->left);
    //     return (tree1->val==tree2->val)&& (left && right);
    // }
    bool isSymmetric(TreeNode *root)
    {
        // TreeNode* tree1=root;
        // TreeNode* tree2=root;
        // return isTrue(tree1,tree2);
        if (!root)
        {
            return true;
        }
        queue<pair<TreeNode *, TreeNode *>> q;
        q.push({root->left, root->right});
        while (!q.empty())
        {
            TreeNode *left = q.front().first;
            TreeNode *right = q.front().second;
            q.pop();
            if (!left && !right)
            {
                continue;
            }
            if (!left || !right)
            {
                return false;
            }
            if (left->val != right->val)
            {
                return false;
            }
            q.push({left->left, right->right});
            q.push({left->right, right->left});
        }
        return true;
    }
};