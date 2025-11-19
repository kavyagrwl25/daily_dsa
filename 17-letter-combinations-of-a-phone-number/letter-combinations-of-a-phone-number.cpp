class Solution {
private:
    void solve(string digits, vector<string> &ans, string map[], int index, string output){
        if(index >= digits.length()){
            ans.push_back(output);
            return ;
        }
        /* solve(digits, ans, map, index, output); */

        int digit = digits[index] - '0';
        string value = map[digit];

        for(int i=0; i<value.length(); i++){
            output.push_back(value[i]);
            solve(digits, ans, map, index+1, output);
            output.pop_back();
        }
    }
public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        string map[] = {"",    "",  "abc",  "def", "ghi",
                      "jkl", "mno", "pqrs", "tuv", "wxyz"};
        string output;
        int index = 0;
        solve(digits, ans, map, index, output);
        return ans;
    }
};