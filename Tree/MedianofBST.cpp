void inorder(Node *root, vector<int> &result)
{
    if (root == NULL)
    {
        return;
    }
    inorder(root->left, result);
    result.push_back(root->data);
    inorder(root->right, result);
}
float findMedian(struct Node *root)
{
    // Code here
    vector<int> v;
    inorder(root, v);
    int n = v.size();
    if (n % 2 == 1)
    {
        return v[n / 2];
    }
    else
    {
        return (v[n / 2 - 1] + v[n / 2]) / 2.0;
    }
}