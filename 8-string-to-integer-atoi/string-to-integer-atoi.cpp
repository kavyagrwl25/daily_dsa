class Solution {
public:
    int myAtoi(string s) {
        int n = s.size();
        int i = 0;

        // 1. Skip leading spaces
        while (i < n && s[i] == ' ') i++;

        // 2. Check sign
        int sign = 1;
        if (i < n && (s[i] == '+' || s[i] == '-')) {
            sign = (s[i] == '-') ? -1 : 1;
            i++;
        }

        // 3. Convert digits
        long result = 0; // use long to check overflow
        while (i < n && isdigit(s[i])) {
            int digit = s[i] - '0';
            result = result * 10 + digit;

            // 4. Clamp if overflow
            if (sign == 1 && result > INT_MAX) return INT_MAX;
            if (sign == -1 && -result < INT_MIN) return INT_MIN;

            i++;
        }

        return (int)(sign * result);
    }
};