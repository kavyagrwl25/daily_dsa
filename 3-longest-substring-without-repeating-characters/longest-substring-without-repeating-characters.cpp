class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> arr(128, 0);
        int n = s.size();
        int left = 0;
        int maxWindowSize = 0;
        for(int right = 0; right < n; right++) {
            arr[s[right]]++;
            while(arr[s[right]] > 1) {
                arr[s[left]]--;
                left++;
            }
           
            maxWindowSize = max(maxWindowSize, right - left + 1);
        }
        return maxWindowSize;
    }
};