class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int result = 0;
        int n = nums.size();
        vector<vector<int>> arr;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n; i++) {
            if (i > 0 && nums[i] == nums[i - 1])
                continue;
            int left = i + 1;
            int right = n - 1;
            while (left < right) {
                result = nums[i] + nums[left] + nums[right];
                if (result == 0) {
                    arr.push_back({nums[i], nums[left], nums[right]});
                    left++;
                    right--;
                    while (left < right && nums[left] == nums[left - 1])
                        left++;
                    while (left < right && nums[right] == nums[right + 1])
                        right--;
                } else if (result > 0) {
                    right--;
                } else {
                    left++;
                }
            }
        }
        return arr;
    }
};