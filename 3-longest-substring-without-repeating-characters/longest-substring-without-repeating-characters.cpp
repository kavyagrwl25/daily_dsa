class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    vector<int> arr(128, 0);

    int left = 0;
    int maxCount = 0;

    for (int right = 0; right < s.size(); right++) {

        arr[s[right]]++;

        while (arr[s[right]] > 1) {
            arr[s[left]]--;
            left++;
        }

        maxCount = max(maxCount, right - left + 1);
    }

    return maxCount;
}
};