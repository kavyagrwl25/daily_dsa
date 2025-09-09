class Solution {
public:
    int maxProduct(vector<int>& nums) {
        long suffix  = 1;
        long prefix = 1;
        long result = INT_MIN;
        int n = nums.size();
        for(int i=0; i<n; i++){
            if(suffix == 0) suffix = 1;
            if(prefix == 0) prefix = 1;
            suffix *= nums[n-i-1];
            prefix *= nums[i];
            result = max(result, max(prefix, suffix));
        }
        return result;
    }
};