class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if (nums.size() == 1) {
            return nums[0];
        }
        
        int res;
        for (int i = 0, j = nums.size() - 1; i <= (nums.size() - 1) / 2; i += 2, j -= 2) {
            if (nums[i] != nums[i + 1]) {
                res = nums[i];
                break;
            } 
            if (nums[j] != nums[j - 1]) {
                res = nums[j];
                break;
            }
        }
        return res;
    };
};