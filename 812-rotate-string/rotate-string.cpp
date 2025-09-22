class Solution {
public:
    string rightRotateByOne(string s) {
        if (s.empty())
            return s;
        return s.back() + s.substr(0, s.size() - 1);
    }

    bool rotateString(string s, string goal) {
        if (s.size() != goal.size()) return false;
        /* string newS = s; */
        for (int i = 0; i<s.size(); i++) {
            if (s == goal) {
                return true;
            }
            s = rightRotateByOne(s);
        }
        return false;
    }
};