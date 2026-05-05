class Solution {
public:
    vector<int> grayCode(int n) {
        if(n == 0) return {};
        std::vector<int> prev{0, 1};
        for(int i = 2; i <= n; ++i){
            std::vector<int> reversed = prev;
            std::reverse(reversed.begin(), reversed.end());
            
            for(int idx{}; idx < reversed.size(); idx++){
                int set_bit = (1 << (i-1)); 
                reversed[idx] = reversed[idx] | set_bit;
                prev.push_back(reversed[idx]);
            }
        }

        return prev;
    }
};