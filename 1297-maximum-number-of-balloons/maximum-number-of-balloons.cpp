class Solution {
public:
    int maxNumberOfBalloons(string text) {

        unordered_map<char, int> mp;

        for (char c : text) {
            mp[c]++;
        }
        mp['l'] /= 2;
        mp['o'] /= 2;

        int ans = INT_MAX;

        ans = min(ans, mp['b']);
        ans = min(ans, mp['a']);
        ans = min(ans, mp['l']);
        ans = min(ans, mp['o']);
        ans = min(ans, mp['n']);

        return ans;
    }
};