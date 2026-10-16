class Solution {
public:

    int rec(int a) {
        if(a == 0) return 0;
        if(a == 1) return 1;
        return rec(a-1) + rec(a-2);
    }

    int fib(int n) {
        int ans = rec(n);
        return ans;
    }
};