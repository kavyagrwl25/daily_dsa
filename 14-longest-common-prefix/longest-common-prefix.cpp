class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 1) return strs[0];
        string newString;
        string element = strs[0];
        for (int i = 0; i < strs.size()-1; i++) {
            newString = "";
            
            string secElem = strs[i + 1];
            int x=0;
            while (secElem[x] != '\0' && element[x] != '\0') {
                if (element[x] == secElem[x]) {
                    newString += element[x];
                    x++;
                } else {
                    x++;
                    break;
                }
            }
            element = newString;
            secElem = "";
        }
        return newString;
    }
};