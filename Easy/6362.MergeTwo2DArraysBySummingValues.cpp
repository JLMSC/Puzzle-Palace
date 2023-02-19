class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>> &nums1, vector<vector<int>> &nums2)
    {
        unordered_map<int, int> idVals;
        for (auto row : nums1)
        {
            idVals[row[0]] += row[1];
        }
        for (auto row : nums2)
        {
            idVals[row[0]] += row[1];
        }

        vector<int> vals;
        vector<vector<int>> res;
        for (auto kv : idVals)
        {
            vals = {kv.first, kv.second};
            res.push_back(vals);
        }

        sort(res.begin(), res.end());
        return res;
    };
};