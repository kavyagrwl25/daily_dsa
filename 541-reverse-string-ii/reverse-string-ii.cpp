class Solution {
public:
    /* void rev(string& x, int i, int j) {             //using recursion but taken O(k) space
        if (i > j)
            return;
        swap(x[i], x[j]);

        rev(x, i + 1, j - 1);
    } */

    void revIter(string& s, int i, int j) {            //using while loop taking O(1) space
        while (i < j) {
            swap(s[i], s[j]);
            i++;
            j--;
        }
    }

    string reverseStr(string s, int k) {
        int n = s.size();
        for (int start = 0; start < n; start += 2 * k) {
            int end = min(start + k - 1, n - 1);
            revIter(s, start, end);
        }
        return s;
    }
};