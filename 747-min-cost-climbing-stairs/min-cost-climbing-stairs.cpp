class Solution {
public:
    vector<int> dp;
    int rec(vector<int> &cost, int i) {
        if(i >= cost.size()) return 0;
        if(dp[i] != -1) return dp[i];
        int c1 = cost[i] + rec(cost, i+2);
        int c2 = cost[i] + rec(cost, i+1);
        return dp[i] = min(c1, c2);
    }

    int minCostClimbingStairs(vector<int>& cost) {
        int i = 0;
        dp.assign(cost.size(), -1);
        return min(rec(cost, i), rec(cost, i+1));
    }
};