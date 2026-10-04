class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size() > s2.size()) return false;
        vector<int> need(26, 0);
        vector<int> window(26, 0);
        for (char c : s1) {
            need[c - 'a']++;
        }
        int k = s1.size();
        int left = 0;
        for (int right = 0; right < s2.size(); right++) {
            // Add right character
            window[s2[right] - 'a']++;
            // Keep window size exactly k
            if (right - left + 1 > k) {
                window[s2[left] - 'a']--;
                left++;
            }
            // Check if current window is a permutation
            if (window == need) {
                return true;
            }
        }
        return false;
    }
};