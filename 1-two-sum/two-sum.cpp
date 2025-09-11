class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int complement = 0;
        int n = nums.size();
        vector<int> arr;
        unordered_map<int, int> mpp;
        for (int i = 0; i < n; i++) {
            complement = target - nums[i];
            if(mpp.find(complement) != mpp.end()){
                arr.push_back(mpp[complement]);
                arr.push_back(i);
            }
            mpp[nums[i]] = i;
        }
        return arr;
    }
};