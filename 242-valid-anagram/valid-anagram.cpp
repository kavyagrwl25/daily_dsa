class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>freq(26,0);
        for(int ch: s){
            freq[ch-'a']++;
        }
        for(int ch: t){
            freq[ch-'a']--;
        }
        for(int count: freq){
            if(count != 0) return false;
        }
        return true;
    }
};