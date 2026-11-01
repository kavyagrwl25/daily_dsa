class Solution {
public:
    
    int tab(vector<int>& nums, int n) {
        vector<int> dp(n+1);  // storing max cost till that house
        dp[0] = nums[0];    // nums is storing the cost of that house
        dp[1] = max(nums[0], nums[1]);
        int ans = 0;
        for(int i=2; i<=n; i++) {
            dp[i] = max(nums[i] + dp[i-2], dp[i-1]);
        }
        return dp[n];
    }

    int rob(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        int i = nums.size()-1;
        return tab(nums, i);
    }
};