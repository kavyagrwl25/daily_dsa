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

        
        sort(freq.begin(), freq.end(), [](auto& a, auto& b) {
            return a.first > b.first; 
        });

        string ans = "";
        for (int i = 0; i < 128; i++) {
            while (freq[i].first > 0) {
                ans += freq[i].second;
                freq[i].first--;
            }
        }

        return ans;
    }
};

/* unordered_map<char, int> freq;

for (char c : s) {
    freq[c]++;
}

sort(s.begin(), s.end(), [&](char a, char b) {
    if (freq[a] == freq[b])
        return a < b;
    return freq[a] > freq[b];
});

return s; */