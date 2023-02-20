class Solution {
public:
    void inOrder(TreeNode *node)
    {
        if (node != nullptr)
        {
            swap(node->left, node->right);
            inOrder(node->left);
            inOrder(node->right);
        }
    };

    TreeNode *invertTree(TreeNode *root)
    {
        inOrder(root);
        return root;
    };
};