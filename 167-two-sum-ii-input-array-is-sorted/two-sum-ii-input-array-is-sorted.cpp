class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int l = 0;
        int r = nums.size()-1;
        while(l<r) {
            int sum = nums[l] + nums[r];
            if(sum == target) return {l+1, r+1};
            else if(sum < target) l++;
            else r--;
        }
        return {};
    } 
};














/* 
int i = 0;
        int j = nums.size() - 1;
        while(i < j){
            int sum = nums[i] + nums[j];
            if(sum == target) return {i+1, j+1};
            else if(sum < target) i++;
            else j--;
        }
        return {}; */