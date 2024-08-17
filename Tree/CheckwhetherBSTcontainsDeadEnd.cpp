class Solution
{
public:
    bool isDeadEnd(Node *root)
    {
        return isDeadEndUtil(root, 1, INT_MAX);
    }

private:
    bool isDeadEndUtil(Node *node, int minValue, int maxValue)
    {
        if (node == nullptr)
            return false;

        // If it's a leaf node, check if it's a dead end
        if (node->left == nullptr && node->right == nullptr)
        {
            return (minValue == maxValue);
        }

        // Recursively check left and right subtrees
        bool leftDeadEnd = isDeadEndUtil(node->left, minValue, node->data - 1);
        bool rightDeadEnd = isDeadEndUtil(node->right, node->data + 1, maxValue);

        return leftDeadEnd || rightDeadEnd;
    }
};