class Solution {
public:

    vector<vector<int>> dp;

    bool rec(vector<int> &nums, int i, int sum) {
        if(sum == 0) return true;
        if(i >= nums.size()) return false;
        if(dp[i][sum] != -1) return dp[i][sum];
        bool yes = false;
        if(nums[i] <= sum) {
            yes = rec(nums, i+1, sum - nums[i]);
        }
        bool no = rec(nums, i+1, sum);
        return dp[i][sum] = yes || no;
    }

    bool canPartition(vector<int>& nums) {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        if(sum % 2 != 0) return false;
        int i = 0;
        dp.assign(nums.size(), vector<int>(sum, -1));
        return rec(nums, i, sum/2);
    }
};