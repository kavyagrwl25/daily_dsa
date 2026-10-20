class Solution {
public:

    vector<vector<int>> dp;

    bool isPalin(string &s, int i, int j) {
        if(i >= j) return true;
        if(dp[i][j] != -1) return dp[i][j];
        if(s[i] != s[j]) return dp[i][j] = false;
        
        return dp[i][j] = isPalin(s, i+1, j-1);
    }

    string longestPalindrome(string s) {
        int st = 0;
        int mL = 1;
        dp.assign(s.size(), vector<int>(s.size(), -1));
        for(int i=0; i<s.size(); i++) {
            for(int j = i+1; j<s.size(); j++) {
                if(isPalin(s, i, j)) {
                    if(j - i + 1 > mL) {
                        st = i;
                        mL = j - i + 1;
                    }
                }
            }
        }
        return s.substr(st, mL);
    }
};