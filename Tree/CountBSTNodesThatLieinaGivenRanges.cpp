class Solution
{
public:
    int getCount(Node *root, int l, int h)
    {
        if (root == nullptr)
        {
            return 0;
        }

        int sum = 0;

        if (root->data >= l && root->data <= h)
        {
            sum = 1 + getCount(root->left, l, h) + getCount(root->right, l, h);
        }
        else if (root->data < l)
        {
            sum = getCount(root->right, l, h);
        }
        else if (root->data > h)
        {
            sum = getCount(root->left, l, h);
        }

        return sum;
    }
};