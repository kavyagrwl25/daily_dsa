class Solution {
public:
    int getLength(vector<char>& string) {
        int count = 0;
        for (int i = 0; i<string.size(); i++) {
            count++;
        }
        return count;
    }
    void reverseString(vector<char>& s) {
        int n = getLength(s);
        int a = 0;
        
        while (a < n) {
            swap(s[a], s[n-1]);
            a++;
            n--;
        }
    }
};