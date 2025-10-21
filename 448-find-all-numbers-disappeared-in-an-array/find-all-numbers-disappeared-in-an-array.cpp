class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        unordered_map<int, int> us;
        vector<int> arr;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            us[nums[i]] = true;
        }
        for (int i = 1; i <= n; i++) {
            if (us.find(i) == us.end()) {
                arr.push_back(i);
            }
        }
        return arr;
    }
};