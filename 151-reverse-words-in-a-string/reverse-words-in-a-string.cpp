class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word;

        string newString = "";
        while(ss >> word){
            if(newString.empty()){
                newString = word;
            }
            else{
                newString = word + " " + newString;
            }
        }
        return newString;
    }
};