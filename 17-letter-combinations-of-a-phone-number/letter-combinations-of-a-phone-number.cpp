class Solution {
private: 
    void solve(string &digits, string output, int index, string map[], vector<string> &ans){
        if(index >= digits.length()){
            ans.push_back(output);
            return ;
        }

        int number = digits[index] - '0';
        string value = map[number];

        for(int i=0; i<value.size(); i++){
            output.push_back(value[i]);
            solve(digits, output, index+1, map, ans);
            output.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        int index = 0;
        string output = "";
        string map[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        solve(digits, output, index, map, ans);
        return ans;
    }
};