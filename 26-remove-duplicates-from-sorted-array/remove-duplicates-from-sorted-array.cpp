class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0) return 0;

        vector<int> arr;
        arr.push_back(nums[0]);
        for(int i=1; i<nums.size(); i++){
            if(nums[i-1] != nums[i]){
                arr.push_back(nums[i]);
            }
        }
        nums = arr;
        return arr.size();
    }
};


































int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int count = 1;
        for(int i=1; i<n; i++){
            if(nums[i] == nums[i-1]){
                continue;
            }
            else{
                nums[count] = nums[i];
                count++;
            }
        }
        return count;
    }