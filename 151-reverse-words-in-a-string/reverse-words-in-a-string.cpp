class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word;
        vector<string> words;

        while (ss >> word) {
            words.push_back(word);
        }

        string newString = "";
        for (int i = words.size() - 1; i >= 0; i--) {
            newString += words[i];
            if (i != 0)
                newString += " ";
        }

        return newString;
    }
};