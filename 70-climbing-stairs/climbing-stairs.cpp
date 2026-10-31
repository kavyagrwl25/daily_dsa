class Solution {
public:
    int climbStairs(int n) {
        int prev = 1;
        int prev_prev = 1;
        if(n == 0 || n == 1) {
            return 1;
        }
        int ans = 0;

        for(int i = 2; i <= n; i++) {
            ans = prev + prev_prev;
            prev_prev = prev;
            prev = ans;
        }

        return ans;
    }
};