class Solution {
public:
    bool isOdd(char c) {
        int digit = c - '0';
        if (digit % 2 == 0)
            return false;
        return true;
    }

    string largestOddNumber(string num) {
        if (isOdd(num.back()))
            return num;

        for (int i = num.size() - 1; i >= 0; i--) {
            if (isOdd(num[i])) {
                return num.substr(0, i + 1);
            }
        }
        return "";
    }
};