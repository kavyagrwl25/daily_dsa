class Solution {
public:
    void rev(string& x, int i, int j) {
        if (i > j)
            return;
        swap(x[i], x[j]);

        rev(x, i + 1, j - 1);
    }

    string reverseStr(string s, int k) {
        int n = s.size();
        for (int start = 0; start < n; start += 2 * k) {
            int end = min(start + k - 1, n - 1);
            rev(s, start, end);
        }
        return s;
    }
};