class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i = 0;
        int j = nums.size() - 1;
        while(i<j){
            int ans = nums[i] + nums[j];
            if(ans == target){
                return {i+1, j+1};
            }
            else if(ans > target){
                j--;
            }
            else{
                i++;
            }
        }
        return {};
    }
};