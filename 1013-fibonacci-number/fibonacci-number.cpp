
class Solution {
public:
    unordered_map<int, int> dp;

    int fib(int n) {
        if (n <= 1) return n;

        // If already calculated, reuse it
        if (dp.count(n)) {
            return dp[n];
        }

        // Calculate and store the answer
        dp[n] = fib(n - 1) + fib(n - 2);

        return dp[n];
    }
};
