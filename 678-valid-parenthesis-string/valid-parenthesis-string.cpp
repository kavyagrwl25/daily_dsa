class Solution {
public:
    bool checkValidString(string s) {
        int min = 0, maxi = 0;

        for (char c : s) {
            if (c == '(') {
                min++;
                maxi++;
            } else if (c == ')') {
                min--;
                maxi--;
            } else { // '*' forks: ')', '', '('
                min--;
                maxi++;
            }

            // no valid path remains
            if (maxi < 0)
                return false;

            // clip negative-balance paths
            min = max(min, 0);
        }

        // ∃ path ends with balance 0
        return min == 0;
    }
};