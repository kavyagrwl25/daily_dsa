class Solution {
public:
    /* double myPow(double x, int n) {
        long pow = n;
        if(pow < 0) {
            x= 1/x;
            pow = -pow;
        }
        double ans = 1;
        while(pow > 0) {
            if(pow % 2 == 1){
            ans *= x;
            }
            x *= x;
            pow /= 2;
        }
        return ans;
    } */

    double myPow(double x, int n) {
        if (n == 0)
            return 1;
        if (n == 1)
            return x;
        long long N = n;
        if (N < 0) {
            x = 1 / x;
            N = -N;
        }

        double ans = myPow(x, N / 2);
        if (N % 2 == 0) {
            return ans * ans;
        } else {
            return x * ans * ans;
        }
    }
};