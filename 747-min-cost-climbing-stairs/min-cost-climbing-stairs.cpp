class Solution {
public:
    int tab(vector<int>& cost, int i) {
        if (i == 0 || i == 1)
            return 0;
        int prev_prev = 0;
        int prev = 0;
        int ans = 0;
        for (int x = 2; x <= i; x++) {
            ans = min(cost[x - 1] + prev, cost[x - 2] + prev_prev);
            prev_prev = prev;
            prev = ans;
        }
        return ans;
    }
    int minCostClimbingStairs(vector<int>& cost) {
        int i = cost.size();
        return tab(cost, i);
    }
};

// Explore all paths, but store only minimum one
// MIN of (taking 1 step, taking 2 step)

// Tabulation-> Just convert the same (recursive recurrence) into (loop + recurrence)


/* (recursive recurrence)
rec(i) = min(
    cost[i-1] + rec(i-1),
    cost[i-2] + rec(i-2)
); */


/* (loop + recurrence)
dp[i] = min(
    cost[i-1] + dp[i-1],   //dp[i] stores the minimum cost required to reach position i
    cost[i-2] + dp[i-2]       // so (i-2) tak ki cost + (i-2) tak phochne ki cost
); */