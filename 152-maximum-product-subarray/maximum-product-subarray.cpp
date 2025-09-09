class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int curMax = nums[0], curMin = nums[0], result = nums[0];

        for (int i = 1; i < n; i++) {
            if (nums[i] < 0)
                swap(curMax, curMin);
            curMax = max(nums[i], curMax * nums[i]);
            curMin = min(nums[i], curMin * nums[i]);
            result = max(result, curMax);
        }

        return result;
    }
};