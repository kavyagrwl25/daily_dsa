class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> arr;
        unordered_map<int, int> um;
        for(int i=0; i<nums.size(); i++){
            int complement = target - nums[i];
            if(um.find(complement) != um.end()){
                arr.push_back(um[complement]);
                arr.push_back(i);
                return arr;
            }
            um[nums[i]] = i;
        }
        return {};
    }
};