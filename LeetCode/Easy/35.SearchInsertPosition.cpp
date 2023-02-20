class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if (find(nums.begin(), nums.end(), target) == nums.end()) {
            nums.push_back(target);
            sort(nums.begin(), nums.end());
        }

        int low = 0, high = nums.size() - 1, mid;
        while (high - low > 1) {
            mid = (high + low) / 2;
            if (nums[mid] < target) {
                low = mid + 1;
            } else {
                high = mid;
            }
        }
        if (nums[low] == target) {
            return low;
        }
        if (nums[high] == target) {
            return high;
        }
        return -1;
    };
};