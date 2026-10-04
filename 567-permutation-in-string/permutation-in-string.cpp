class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> arr(128, 0);
        vector<int> window(128, 0);
        for (auto it : s1) {
            arr[it]++;
        }
        int left = 0;
        int n = s1.size() - 1;
        for (int right = 0; right <= s2.size() - 1; right++) {
            window[s2[right]]++;
            while (right - left != n) {
                right++;
                if (right == s2.size())
                    return false;

                window[s2[right]]++;
            }
            // fix the window size
            if (window == arr)
                return true;

            window[s2[left]]--;
            left++;
        }
        return false;
    }
};