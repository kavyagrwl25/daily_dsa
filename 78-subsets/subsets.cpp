class Solution {
public:

    void subset(vector<int>& nums, vector<vector<int>> &ans, vector<int> output, int index){
        if(index >= nums.size()){
            ans.push_back(output);
            return ;
        }
        subset(nums, ans, output, index+1);

        int element = nums[index];
        output.push_back(element);
        subset(nums, ans, output, index+1);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        int index = 0;
        subset(nums, ans, output, index);
        return ans;
    }
};