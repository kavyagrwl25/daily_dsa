class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;
        vector<int> ans;
        int n = nums.size();

        for(int num : nums) mp[num]++;

        for(auto it : mp){
            if(it.second > n/3) ans.push_back(it.first);
        }

        sort(ans.begin(), ans.end());
        return ans;
    }
};