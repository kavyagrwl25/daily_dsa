class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> us;
        int complement = 0;
        for(int i =0; i<nums.size(); i++){
            complement = target - nums[i];
            if(us.find(complement) != us.end()){
                return {us[complement], i};
            }
            us[nums[i]] = i;
        }
        return {};
    }
};