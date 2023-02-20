class Solution {
public:
    vector<int> nodeValues;

    void symOder(TreeNode *node)
    {
        if (node != nullptr)
        {
            symOder(node->left);
            nodeValues.push_back(node->val);
            symOder(node->right);
        }
    };

    int minDiffInBST(TreeNode *root)
    {
        symOder(root);
        int minDif = INT_MAX;
        int nodeCount = nodeValues.size() - 1;
        sort(nodeValues.begin(), nodeValues.end());
        for (int i = 0; i < nodeCount; i++)
        {
            if (nodeValues[i + 1] - nodeValues[i] < minDif)
            {
                minDif = nodeValues[i + 1] - nodeValues[i];
            }
        }
        return minDif;
    };
};