class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int ans = 0;
        int maxOne = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] == 1){
                ans++;
            }
            maxOne = max(maxOne, ans);
            if(nums[i] != 1){
                
                ans = 0;
            }
        }
        return maxOne;
    }
};