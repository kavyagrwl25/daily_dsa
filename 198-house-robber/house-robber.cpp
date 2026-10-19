class Solution {
public:

    vector<int> dp;

    int rec(vector<int> nums, int i) {
        if(i >= nums.size()) return 0;
        if(dp[i] != -1) return dp[i];
        int rob = nums[i] + rec(nums, i+2);
        int skip = rec(nums, i+1);
        return dp[i] = max(rob, skip);
    }

    int rob(vector<int>& nums) {
        int i = 0;
        dp.assign(nums.size(), -1);
        return rec(nums, i);
    }
};