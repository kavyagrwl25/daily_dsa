class Solution {
public:
    int maxFreqSum(string s) {
        vector<int> cnt(26, 0);
        for (char c : s) {
            cnt[c - 'a']++;
        }
        int maxVowel = 0;
        int maxConsonant = 0;
        auto isVowel = [&](char c)->bool {
            return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
        };
        for (int i = 0; i < 26; i++) {
            char c = 'a' + i;
            if (isVowel(c)) {
                maxVowel = max(maxVowel, cnt[i]);
            } else {
                maxConsonant = max(maxConsonant, cnt[i]);
            }
        }
        return maxVowel + maxConsonant;
    }
};