class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>>
            mp; // eg=> "aet" → ["eat", "tea", "ate"]

        for (string s : strs) {
            string key = s; // copy the string to sort while keeping original
                            // string as same
            sort(key.begin(), key.end());

            mp[key].push_back(s);
        }

        vector<vector<string>> ans;

        for (auto entry : mp) {
            ans.push_back(entry.second);
        }
        return ans;
    }
};