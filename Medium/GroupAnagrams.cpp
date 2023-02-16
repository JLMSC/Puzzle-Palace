class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string> &strs)
    {
        vector<vector<string>> res;
        unordered_map<string, vector<string>> anagram;

        for (const auto &str : strs)
        {
            string sortedStr = str;
            sort(sortedStr.begin(), sortedStr.end());
            anagram[sortedStr].push_back(str);
        }

        for (const auto &group : anagram)
        {
            res.push_back(group.second);
        }
        
        return res;
    };
};