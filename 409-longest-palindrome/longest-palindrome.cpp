class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int> mp;
        int ans = 0;
        bool isOnePresent = false;

        for(char c : s) {
            mp[c]++;
        }

        for(auto it : mp) {
            if(it.second % 2 == 0) {
                ans += it.second;
            }
            else {
                ans += it.second - 1;
                isOnePresent = true;
            }
        }

        if(isOnePresent)
            ans++;

        return ans;
    }
};