class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        for(int i=0; i<nums.size(); i++){
            nums[i] = nums[i]*nums[i];
        }
        int j =0;
        sort(nums.begin(), nums.end());
        return nums;
    }
};