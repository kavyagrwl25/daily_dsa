class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size()-1;
        int a = 0;
        
        while (a < n) {
            swap(s[a], s[n]);
            a++;
            n--;
        }
    }
};