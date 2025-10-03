class Solution {
public:
    int maxDepth(string s) {
        int count = 0;
        int maxi = 0;
        int n = s.size();
        for(int i =0; i<n; i++){
            if(s[i] != '(' && s[i] != ')') {
                continue;
            }
            else if(s[i] == '('){
                count++;
                maxi = max(count, maxi);
            }
            else if(s[i] == ')'){
                count--;
            }
        }
        return maxi;
    }
};