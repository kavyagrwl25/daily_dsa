class Solution {
public:
    
    int tab(vector<int>& nums, int n) {
        int prev_prev = nums[0];    
        int prev = max(nums[0], nums[1]);
        int ans = max(prev_prev, prev);
        for(int i=2; i<=n; i++) {
            ans = max(nums[i] + prev_prev, prev);
            prev_prev = prev;
            prev = ans;
        }
        return ans;
    }

    int rob(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        int i = nums.size()-1;
        return tab(nums, i);
    }
};

// prev_prev = maximum money till house i-2
// prev = maximum money till house i-1