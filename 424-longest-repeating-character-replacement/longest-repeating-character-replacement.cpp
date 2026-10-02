class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int> mp;

        int left = 0;
        int maxFreq = 0;
        int maxLen = 0;

        for (int right = 0; right < s.size(); right++) {

            mp[s[right]]++;

            maxFreq = max(maxFreq, mp[s[right]]);

            int windowSize = right - left + 1;

            while (windowSize - maxFreq > k) {
                mp[s[left]]--;
                left++;

                windowSize = right - left + 1;
            }

            maxLen = max(maxLen, windowSize);
        }

        return maxLen;
    }
};