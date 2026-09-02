class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.size();
        int j = n - 1;
        for(int i=0; i<=j; i++){
            while(!isalnum(s[i]) && i<j) i++;
            while(!isalnum(s[j]) && i<j) j--;
            if(tolower(s[i]) != tolower(s[j])) return false;
            j--;
        }
        return true;
    }
};









/* 

bool isPalindrome(string s) {
        int i = 0;
        int j = s.size() - 1;
        
        while(i<j){
            while( i<j && !isalnum(s[i]) )   i++;
            while( i<j && !isalnum(s[j]) )   j--;
            if( tolower(s[i]) != tolower(s[j]) ){
                return false;
            }
            i++;
            j--;
        }
        return true;
    } */