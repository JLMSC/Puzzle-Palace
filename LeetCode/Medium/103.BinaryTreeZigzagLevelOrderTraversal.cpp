class Solution {
public:
    vector<vector<int>> res;
    unordered_map<int, vector<int>> levels;

    void zigZagOrder(TreeNode *node, int depth = 0)
    {
        if (node != nullptr)
        {
            if (depth % 2 != 0) {
                levels[depth].insert(levels[depth].begin(), node->val);
            } else {
                levels[depth].push_back(node->val);
            }
            zigZagOrder(node->left, depth + 1);
            zigZagOrder(node->right, depth + 1);
        }
    };

    vector<vector<int>> zigzagLevelOrder(TreeNode *root)
    {
        zigZagOrder(root);
        for (int i = 0; i < levels.size(); i++)
        {
            res.push_back(levels.at(i));
        }
        return res;
    };
};