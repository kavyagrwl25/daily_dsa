class Solution {
public:

    bool isPalin(string &s, int i, int j) {
        if(i >= j) return true;
        if(s[i] != s[j]) return false;
        
        return isPalin(s, i+1, j-1);
    }

    string longestPalindrome(string s) {
        int st = 0;
        int mL = 1;
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