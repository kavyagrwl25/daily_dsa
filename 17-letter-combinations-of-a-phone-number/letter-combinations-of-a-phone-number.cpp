class Solution {
private:
    void solve(string &digits, int index, string output, string map[], vector<string> &ans){
        if(index >= digits.length()){
            ans.push_back(output);
            return ;
        }
        int num = digits[index] - '0';
        string element = map[num];

        for(int i=0; i<element.length(); i++){
            output.push_back(element[i]);
            solve(digits, index+1, output, map, ans);
            output.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        int index = 0;
        string output;
        string map[10] = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        solve(digits, index, output, map, ans);
        return ans;
    }
};