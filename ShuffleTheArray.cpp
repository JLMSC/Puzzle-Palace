class Solution
{
public:
    vector<int> shuffle(vector<int> &nums, int n)
    {
        vector<int> arrayShuffle;

        for (int i = 0; i < n; i++)
        {
            arrayShuffle.push_back(nums[i]);
            arrayShuffle.push_back(nums[n + i]);
        }

        return arrayShuffle;
    }
};