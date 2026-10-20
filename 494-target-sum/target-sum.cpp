class Solution {
public:
    unordered_map<string, int> dp;

    int rec(vector<int>& nums, int target, int i) {
        if (i == nums.size()) {
            return target == 0 ? 1 : 0;
        }

        string key = to_string(i) + "," + to_string(target);

        if (dp.count(key)) return dp[key];

        int add = rec(nums, target - nums[i], i + 1);
        int sub = rec(nums, target + nums[i], i + 1);

        return dp[key] = add + sub;
    }

    int findTargetSumWays(vector<int>& nums, int target) {
        /* dp.clear(); */
        return rec(nums, target, 0);
    }
};