class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> arr(128, 0);
        int left = 0;
        int maxFreq = 0;
        int maxWindowSize = 0;
        for(int right = 0; right <= s.size() - 1; right++) {
            arr[s[right]]++;
            maxFreq = max(maxFreq, arr[s[right]]);
            while(maxFreq + k < (right - left + 1)) {
                arr[s[left]]--;
                left++;
            }
            maxWindowSize = max(maxWindowSize, right - left + 1);
        }
        return maxWindowSize;
    }
};