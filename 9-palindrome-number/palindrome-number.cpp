class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) {
            return false;
        }
        long reversed = 0;
        long num = x;
        while(x) {
            long digit = x%10;
            reversed = reversed * 10 + digit; 
            x/=10;
        }
        if(reversed == num) {
            return true;
        }
        return false;
    }
};