class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
    vector<string> result;
    if (words.empty()) return result;

    result.push_back(words[0]);  

    auto sortedWord = [](const string& s) {
        string temp = s;
        sort(temp.begin(), temp.end());
        return temp;
    };

    for (int i = 1; i < words.size(); i++) {
        if (sortedWord(words[i]) != sortedWord(result.back())) {
            result.push_back(words[i]);
        }
    }

    return result;
}
};