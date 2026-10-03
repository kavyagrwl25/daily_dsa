class Solution {
public:
    string minWindow(string s, string t) {

        unordered_map<char, int> need;
        unordered_map<char, int> window;

        for (char c : t) {
            need[c]++;
        }

        int left = 0;
        int have = 0;
        int needCount = need.size();

        int minLen = INT_MAX;
        int start = 0;

        for (int right = 0; right < s.size(); right++) {

            char c = s[right];
            window[c]++;

            if (need.find(c) != need.end() &&
                window[c] == need[c]) {
                have++;
            }

            while (have == needCount) {

                int windowSize = right - left + 1;

                if (windowSize < minLen) {
                    minLen = windowSize;
                    start = left;
                }

                char leftChar = s[left];
                window[leftChar]--;

                if (need.find(leftChar) != need.end() &&
                    window[leftChar] < need[leftChar]) {
                    have--;
                }

                left++;
            }
        }

        if (minLen == INT_MAX)
            return "";

        return s.substr(start, minLen);
    }
};