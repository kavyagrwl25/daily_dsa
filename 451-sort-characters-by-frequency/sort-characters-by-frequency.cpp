class Solution {
public:
    string frequencySort(string s) {
        vector<pair<int, char>> freq;

        for (int i = 0; i < 128; i++) {
            freq.push_back({0, char(i)});
        }

        for (char c : s) {
            freq[c].first++;
        }

        sort(freq.begin(), freq.end(),
             [](auto& a, auto& b) { return a.first > b.first; });

        string ans = "";
        for (int i = 0; i < 128; i++) {
            if (freq[i].first > 0)
                ans.append(freq[i].first, freq[i].second);
        }

        return ans;
    }
};
