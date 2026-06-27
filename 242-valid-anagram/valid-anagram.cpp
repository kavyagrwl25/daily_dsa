class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> v(26, 0);
        if(s.length() != t.length()) return false;
        for(char c : s){
            v[c - 'a']++;
        }
        for(char c : t){
            v[c - 'a']--;
        }
        for(int i =0; i<v.size(); i++){
            if(v[i] != 0) return false;
        }
        return true;
    }
};


//bute-> sort the string and compare
//better> use unordered_map and store key and value








/* 

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
    } */