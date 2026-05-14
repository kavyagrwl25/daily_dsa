class Solution {
public:
    int titleToNumber(string columnTitle) {
        long long ans = 0;

        // Positional system in base-26 with digits A..Z mapped to 1..26.
        for (char ch : columnTitle) {
            ans = ans * 26 + (ch - 'A' + 1);
        }

        return (int)ans;
    }
};