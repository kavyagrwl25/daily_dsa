class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        unordered_map<char, int> frq;

        for(char ch : magazine){
            frq[ch]++;
        }

        for(char ch : ransomNote){
            if(frq[ch] == 0){
                return false;
            }
            frq[ch]--;
        }

        return true;
    }
};