class Solution {
public:
    bool solve(string& s, int i, int j) {
        if (i >= j)
            return true;
        if (s[i] == s[j])
            return solve(s, i + 1, j - 1);
        return false;
    }
    string longestPalindrome(string s) {
        int st = 0;
        int maxLen = 1;
        for (int i = 0; i < s.size(); i++) {
            for (int j = i + 1; j < s.size(); j++) {
                if (solve(s, i, j)) {
                    if (j - i + 1 > maxLen) {
                        st = i;
                        maxLen = j - i + 1;
                    }
                }
            }
        }
        return s.substr(st, maxLen);
    }
};