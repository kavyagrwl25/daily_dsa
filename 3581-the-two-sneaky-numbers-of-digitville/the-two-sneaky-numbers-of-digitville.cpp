class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
    vector<int> ans;
    unordered_map<int, int> freq;

    for (int x : nums) {
        freq[x]++;
    }

    for (int i = 0; i < nums.size(); i++) {
        if (freq[nums[i]] == 2) {
            ans.push_back(nums[i]);
            freq[nums[i]] = 0; 
        }
    }
    return ans;
}

};