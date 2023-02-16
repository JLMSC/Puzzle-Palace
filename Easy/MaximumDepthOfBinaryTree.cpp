class Solution {
public:
    vector<int> depths;

    void symOrder(TreeNode *node, int depth)
    {
        if (node != nullptr)
        {
            symOrder(node->left, depth + 1);
            depths.push_back(depth);
            symOrder(node->right, depth + 1);
        }
    };

    int maxDepth(TreeNode *root)
    {
        symOrder(root, 1);
        int deepestNode = 0;
        for (auto nodeDepth : depths) {
            if (nodeDepth > deepestNode) {
                deepestNode = nodeDepth;
            }
        }
        return deepestNode;
    };
};