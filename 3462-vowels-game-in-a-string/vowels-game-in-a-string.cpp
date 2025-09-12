class Solution {
public:
    bool isVowel(char c) {
        c = tolower(c);
        return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    }

    bool doesAliceWin(const string& s) {
        for (char c : s) {
            if (isVowel(c))
                return true;
        }
        return false;
    }
};