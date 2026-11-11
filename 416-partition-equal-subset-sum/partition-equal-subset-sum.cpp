class Solution {
public:
    vector<vector<int>> dp;
    bool rec(int i, int sum, vector<int> &nums) {
        if(sum == 0) return true;
        if(i < 0) return false;
        if(dp[i][sum] != -1) return dp[i][sum];
        bool take = false;
        if(nums[i] <= sum) {
            take = rec(i-1, sum - nums[i], nums);
        }
        bool skip = rec(i-1, sum, nums);
        return dp[i][sum] = take || skip;
    }


    bool canPartition(vector<int>& nums) {
        int sum = accumulate(nums.begin(), nums.end(), 0);
        if(sum % 2 != 0) return false;
        int i = nums.size()-1;
        dp.assign(nums.size(), vector<int>(sum / 2 + 1, -1));
        return rec(i, sum/2, nums);
    }
};