class Solution {
public:
    int beautySum(string s) {
        int sum = 0;
        int n = s.size();
        for(int i =0; i<n; i++){
            vector<int> freq(26,0);
            for(int j =i; j<n; j++){
                freq[s[j] - 'a']++;
                int mini = INT_MAX;
                int maxi = 0;
                for(int k=0; k<26; ++k){
                    if(freq[k] > 0){
                        maxi = max(maxi, freq[k]);
                        mini = min(mini, freq[k]);
                    }
                }
                sum = sum + (maxi-mini);
            }
        }
        return sum;
    }
};