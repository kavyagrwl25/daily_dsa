class Solution {
public:

    bool isPal(string &s, int left, int right){
        while(left < right){
            if(s[left] != s[right]) return false;
            left++;
            right--;
        }
        return true;
    }

    bool validPalindrome(string s) {

        int i = 0;
        int j = s.size() - 1;

        while(i < j){

            if(s[i] != s[j]){
                return isPal(s, i + 1, j) || isPal(s, i, j - 1);
            }

            i++;
            j--;
        }

        return true;
    }
};