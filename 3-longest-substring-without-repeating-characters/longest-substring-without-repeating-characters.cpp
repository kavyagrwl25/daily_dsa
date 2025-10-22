class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> lastIndex(256, -1); 
        int left = 0;                   
        int maxLen = 0;

        for (int right = 0; right < s.size(); right++) {
            char c = s[right];

          
            if (lastIndex[c] >= left) {
                left = lastIndex[c] + 1;
            }

            lastIndex[c] = right; 
            maxLen = max(maxLen, right - left + 1);
        }

        return maxLen;
    }
};